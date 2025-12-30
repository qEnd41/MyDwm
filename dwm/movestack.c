void
movestack(const Arg *arg)
{
	Client *c, *f, *at;

	if (arg->i > 0) {
		for (c = selmon->sel->next; c && (!ISVISIBLE(c) || c->isfloating); c = c->next);
		if (!c)
			for (c = selmon->clients; c && (!ISVISIBLE(c) || c->isfloating); c = c->next);
	} else {
		for (f = selmon->clients; f != selmon->sel; f = f->next)
			if (ISVISIBLE(f) && !f->isfloating)
				c = f;
		if (!c)
			for (; f; f = f->next)
				if (ISVISIBLE(f) && !f->isfloating)
					c = f;
	}

	if (c && c != selmon->sel) {
		detach(selmon->sel);
		for (at = selmon->clients; at->next && at->next != c; at = at->next);
		selmon->sel->next = at->next;
		at->next = selmon->sel;
		focus(NULL);
		arrange(selmon);
	}
}
