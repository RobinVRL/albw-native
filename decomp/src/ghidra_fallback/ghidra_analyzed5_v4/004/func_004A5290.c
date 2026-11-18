#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0034BB9C(int param_1);
extern float func_0034C0E4(int param_1,int param_2,int param_3,undefined4 param_4);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066F90C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_004a54d0;
extern float DAT_004a54d4;
extern int DAT_004a54d8;
extern char s_SE_S_LIVER_BTN_DOWN_004a54dc[];
extern char s_SE_S_LIVER_BTN_DOWN_FIN_004a551c[];
extern char s_SE_S_LIVER_BTN_UP_004a54f0[];
extern char s_SE_S_LIVER_BTN_UP_FIN_004a5504[];

// USA 004A5290 <- EU 004A5268 (Ghidra, non-matching)
// GLOBAL DAT_004a54d0 int *
// GLOBAL DAT_004a54d4 float
// GLOBAL DAT_004a54d8 int
// GLOBAL s_SE_S_LIVER_BTN_DOWN_004a54dc string
// GLOBAL s_SE_S_LIVER_BTN_DOWN_FIN_004a551c string
// GLOBAL s_SE_S_LIVER_BTN_UP_004a54f0 string
// GLOBAL s_SE_S_LIVER_BTN_UP_FIN_004a5504 string

void func_004A5290(int *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float in_s0;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  iVar3 = func_0034BB9C(param_1[0x11]);
  if ((iVar3 != 0) &&
     (iVar4 = (**(code **)(*param_1 + 0x40))(param_1), iVar3 = DAT_004a54d8, fVar6 = DAT_004a54d4,
     iVar4 != 0)) {
    uVar5 = *(uint *)(*DAT_004a54d0 + (uint)*(byte *)(param_1[4] + 0x70) * 400 + 300);
    in_s0 = DAT_004a54d4;
    if (*(char *)((int)param_1 + 0x87) == '\x01') {
      if ((uVar5 & 0x110000) == 0) {
        param_1[0x1a] = param_1[7];
        *(undefined2 *)((int)param_1 + 0x62) = 5;
        *(undefined2 *)(param_1 + 0x18) = 0;
        fVar6 = func_002317C0((undefined2 *)(param_1 + 0x18),fVar6);
        func_0066F90C(param_1 + 8,1);
        return;
      }
      if (0x13 < param_1[8]) {
        cVar1 = (char)param_1[0x21];
        cVar2 = cVar1 + '\x01';
        *(char *)(param_1 + 0x21) = cVar2;
        if (cVar2 < '\0') {
          cVar2 = '\0';
        }
        else if (*(char *)((int)param_1 + 0x86) < cVar2) {
          cVar2 = *(char *)((int)param_1 + 0x86);
        }
        *(char *)(param_1 + 0x21) = cVar2;
        in_s0 = func_0034C0E4(param_1[0x11],(int)cVar1,(int)cVar2,5);
        if (*(char *)((int)param_1 + 0x86) != '\0') {
          if ((int)(char)param_1[0x21] != (int)cVar1) {
            local_1c = s_SE_S_LIVER_BTN_UP_004a54f0;
            local_20 = iVar3;
            func_00533078(param_1,&local_20,0);
            return;
          }
          if (*(char *)((int)param_1 + 0x89) == '\0') {
            local_1c = s_SE_S_LIVER_BTN_UP_FIN_004a5504;
            local_20 = iVar3;
            func_00533078(param_1,&local_20,0);
            *(undefined1 *)((int)param_1 + 0x89) = 1;
            return;
          }
        }
      }
    }
    else {
      if ((uVar5 & 0x220000) == 0) {
        param_1[0x1a] = param_1[7];
        *(undefined2 *)((int)param_1 + 0x62) = 6;
        *(undefined2 *)(param_1 + 0x18) = 0;
        fVar6 = func_002317C0((undefined2 *)(param_1 + 0x18),fVar6);
        func_0066F90C(param_1 + 8,1);
        return;
      }
      if (0x13 < param_1[8]) {
        cVar1 = (char)param_1[0x21];
        cVar2 = cVar1 + -1;
        *(char *)(param_1 + 0x21) = cVar2;
        if (cVar2 < '\0') {
          cVar2 = '\0';
        }
        else if (*(char *)((int)param_1 + 0x86) < cVar2) {
          cVar2 = *(char *)((int)param_1 + 0x86);
        }
        *(char *)(param_1 + 0x21) = cVar2;
        in_s0 = func_0034C0E4(param_1[0x11],(int)cVar1,(int)cVar2,5);
        if (*(char *)((int)param_1 + 0x86) != '\0') {
          if ((int)(char)param_1[0x21] == (int)cVar1) {
            if (*(char *)((int)param_1 + 0x89) == '\0') {
              local_1c = s_SE_S_LIVER_BTN_DOWN_FIN_004a551c;
              local_20 = iVar3;
              func_00533078(param_1,&local_20,0);
              *(undefined1 *)((int)param_1 + 0x89) = 1;
              return;
            }
          }
          else {
            local_1c = s_SE_S_LIVER_BTN_DOWN_004a54dc;
            local_20 = iVar3;
            func_00533078(param_1,&local_20,0);
          }
        }
      }
    }
  }
  return;
}

