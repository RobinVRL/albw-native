// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00334474(int param_1,undefined4 param_2);
extern int func_0036174C(int param_1,int param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int DAT_0033499c;
extern int *DAT_003349a0;
extern int *DAT_003349a4;
extern int *DAT_003349a8;
extern int *DAT_003349ac;
extern char s_SE_HeartContainer_APPEAR_PRE_0033497c[];

// USA 0033485C <- EU 00334838 (Ghidra, non-matching)
// GLOBAL DAT_0033499c int
// GLOBAL DAT_003349a0 int *
// GLOBAL DAT_003349a4 int *
// GLOBAL DAT_003349a8 int *
// GLOBAL DAT_003349ac int *
// GLOBAL s_SE_HeartContainer_APPEAR_PRE_0033497c string

void func_0033485C(int *param_1)

{
  bool bVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(char * *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define iStack_3c (*(int *)(albw_frame + 0x14))
  #define iStack_38 (*(int *)(albw_frame + 0x18))
  #define iStack_34 (*(int *)(albw_frame + 0x1c))
  #define iStack_30 (*(int *)(albw_frame + 0x20))
  #define fStack_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(int *)(albw_frame + 0x28))
  #define iStack_24 (*(int *)(albw_frame + 0x2c))
  #define local_20 (*(int *)(albw_frame + 0x30))
  #define afStack_1c ((float *)(albw_frame + 0x34))
  if ((((char)param_1[0x10e] == '\0') && (bVar1 = func_00588BF0((int)param_1,0), bVar1)) &&
     (bVar1 = func_00588BF0((int)param_1,1), !bVar1)) {
    func_00334474((int)param_1,1);
    local_44 = s_SE_HeartContainer_APPEAR_PRE_0033497c;
    local_48 = DAT_0033499c;
    func_00150A84(param_1,&local_48,0);
  }
  if (*(char *)((int)param_1 + 0x412) == '\x01') {
    if ((char)param_1[0x105] != '\x02') {
      iVar2 = func_00588BE4((int)param_1);
      if (iVar2 == *DAT_003349a8) {
        iVar2 = 4;
      }
      else {
        iVar2 = 8;
      }
      iVar2 = func_0036174C(*DAT_003349ac,iVar2,param_1 + 0x111);
      if (iVar2 == 0) {
        *(undefined1 *)((int)param_1 + 0x412) = 0;
      }
      else {
        *(undefined1 *)((int)param_1 + 0x412) = 2;
      }
      return;
    }
  }
  else if ((char)param_1[0x105] == '\x01') {
    local_48 = *DAT_003349a4;
    local_44 = (char *)DAT_003349a4[1];
    iStack_3c = DAT_003349a4[3];
    iStack_38 = DAT_003349a4[4];
    iStack_34 = DAT_003349a4[5];
    iStack_30 = DAT_003349a4[6];
    fStack_2c = ALBW_AS_F32(DAT_003349a4[7]);
    local_28 = DAT_003349a4[8];
    iStack_24 = DAT_003349a4[9];
    local_20 = DAT_003349a4[10];
    local_40 = *(undefined4 *)(*(int *)(*DAT_003349a0 + 0x18) + 0x1a8);
    func_00115C54(afStack_1c,(float *)(param_1 + 0xf4),&fStack_2c);
    iVar2 = (**(code **)(*(int *)param_1[0x110] + 0x34))
                      ((int *)param_1[0x110],afStack_1c,&local_48,0);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x105) = 2;
    }
  }
  return;
}

