static const char *FILE_PRE_MENU = "/system/bootmenu/script/pre_bootmenu.sh";
static const char *FILE_POST_MENU = "/system/bootmenu/script/post_bootmenu.sh";

static const char *FILE_2NDINIT   = "/system/bootmenu/script/2nd-init.sh";
static const char *FILE_2NDBOOT   = "/system/bootmenu/script/2nd-boot.sh";
static const char *FILE_STOCK     = "/system/bootmenu/script/stock.sh";
static const char *FILE_ADBD      = "/system/bootmenu/script/adbd.sh";
static const char *FILE_SDCARD    = "/system/bootmenu/script/sdcard.sh";
static const char *FILE_CDROM     = "/system/bootmenu/script/cdrom.sh";
static const char *FILE_SYSTEM    = "/system/bootmenu/script/system.sh";
static const char *FILE_DATA      = "/system/bootmenu/script/data.sh";

static const char *FILE_OVERCLOCK = "/system/bootmenu/script/overclock.sh";
static const char *FILE_OVERCLOCK_CONF  = "/system/bootmenu/config/overclock.conf";

static const char *FILE_CUSTOMRECOVERY  = "/system/bootmenu/script/recovery.sh";
static const char *FILE_STABLERECOVERY  = "/system/bootmenu/script/recovery_stable.sh";
static const char *FILE_BOOTMODE_CLEAN  = "/system/bootmenu/script/bootmode_clean.sh";

static const char *FILE_DEFAULTBOOTMODE = "/system/bootmenu/config/default_bootmode.conf";
static const char *FILE_BOOTMODE        = "/cache/recovery/bootmode.conf";
static const char *FILE_BYPASS          = "/data/.bootmenu_bypass";
static const char *FILE_STOCKRECOVERY   = "/system/bin/reboot";

static const char *SYS_POWER_CONNECTED  = "/sys/class/power_supply/ac/online";
static const char *SYS_USB_CONNECTED    = "/sys/class/power_supply/usb/online";
static const char *SYS_BATTERY_LEVEL    = "/sys/class/power_supply/battery/charge_counter"; // content: 0 to 100

#if STOCK_VERSION

static const char *FILE_ROOT      = "/system/bootmenu/script/unroot.sh";
static const char *FILE_UNINSTALL = "/system/bootmenu/script/uninstall.sh";

int show_menu_system(void);

#endif //STOCK_VERSION

int int_mode(char* mode);
const char* str_mode(int mode);

int show_menu_boot(void);
int show_menu_overclock(void);
int show_menu_tools(void);
int show_menu_recovery(void);

int usb_connected(void);
int adb_started(void);
int battery_level(void);

int snd_init(int ui);
int snd_boot(int ui);
int stk_boot(int ui);

int show_config_bootmode(void);

int get_default_bootmode(void);
int set_default_bootmode(int mode);
int get_bootmode(int clean);

int bootmode_write(const char* str);
int next_bootmode_write(const char* str);

int bypass_sign(const char* mode);
int bypass_check(void);

int exec_and_wait(char** argp);
int exec_script(const char* filename, int ui);
int real_execute(int r_argc, char** r_argv);

int set_usb_device_mode(const char *mode);
int mount_usb_storage(const char *part);

