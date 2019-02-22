有种数据类型叫枚举（enumeration），由一系列的整数成员组成，表示了这一数据类型的变量可以取的所有可能值，但都不直接以字面量形式存在，每个值都被单独赋予了一个名字。
例如：
enum week {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
这便是一个周的枚举，对应的星期有对应的编号（编号都是隐形的，对于枚举的别名，系统自动从0开始一一标注），其中Sunday为0，Monday为1，以此类推。

也可以显性编号
一、
enum week {
    SUNDAY = 1,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
Sunday被赋值为1，后面的变量从1开始依次递增1。

二、或者：
enum week {
    SUNDAY = 1,
    MONDAY,
    TUESDAY,
    WEDNESDAY = 1,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
其中Monday和Thursday均为2，后面的值依次增加1。
