static const Block blocks[] = {
    /* Текст замість іконок | Команда | Інтервал | Сигнал кліку */
    {" VOL ", "pamixer --get-volume-human",           1,          10},
    {" BAT ", "cat /sys/class/power_supply/BAT0/capacity", 30,          0},
    {" WIFI ", "~/.local/bin/sb-wifi",                10,         1},
    {" DISK ", "df -h / | awk 'NR==2 {print $4}'",    60,         0},
    {" TEMP ", "sensors | grep 'Package id 0' | awk '{print $4}'", 10, 0},
    {" ",      "date +'%a %d.%m %H:%M'",               1,          0},
};
static char delim[] = " | ";
