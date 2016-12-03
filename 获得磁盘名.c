#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
int main()
 {
    char d[1024] = "";
    char *adr;
    char USB [2]="";
    int i=0;
    GetLogicalDriveStrings(1024, d);
    adr = d;
    while (*adr)
    {
        if (GetDriveType(adr) == DRIVE_UNKNOWN/*0*/)            printf("DRIVE_UNKNOWN :%s\n",adr);//未知设备
        if (GetDriveType(adr) == DRIVE_NO_ROOT_DIR/*1*/)        printf("DRIVE_NO_ROOT_DIR :%s\n",adr);//未检测到设备
        if (GetDriveType(adr) == DRIVE_REMOVABLE/*2*/)          printf("DRIVE_REMOVABL :%s\n",adr);//可移动设备
        if (GetDriveType(adr) == DRIVE_FIXED/*3*/)              printf("DRIVE_FIXED :%s\n",adr);//本地磁盘
        if (GetDriveType(adr) == DRIVE_REMOTE/*4*/)             printf("DRIVE_REMOTE :%s\n",adr);//网络硬盘
        if (GetDriveType(adr) == DRIVE_CDROM/*5*/)              printf("DRIVE_CDROM:%s\n",adr);//光驱
        if (GetDriveType(adr) == DRIVE_RAMDISK/*6*/)            printf("DRIVE_RAMDISK :%s\n",adr);//虚拟内存
        adr += 4;
    }
    return 0;
}
