// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_00521054();
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_006615C4(undefined4 *param_1,undefined1 param_2);
extern int *DAT_002898a4;
extern int DAT_002898a8;
extern float DAT_002898c4;
extern int *DAT_002898c8;
extern undefined4 DAT_002898cc;
extern float DAT_002898d0;
extern char s_SE_OctorokRock_BREAK_002898ac[];

// USA 00289734 <- EU 0028975C (Ghidra, non-matching)
// GLOBAL DAT_002898a4 int *
// GLOBAL DAT_002898a8 int
// GLOBAL DAT_002898c4 float
// GLOBAL DAT_002898c8 int *
// GLOBAL DAT_002898cc undefined4
// GLOBAL DAT_002898d0 float
// GLOBAL s_SE_OctorokRock_BREAK_002898ac string

undefined4 func_00289734(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  iVar3 = DAT_002898a8;
  piVar1 = DAT_002898a4;
  if ((char)param_1[0x121] == '\0') {
    iVar2 = func_0051E6D0(*DAT_002898c8,(float *)(param_1 + 0xf4),DAT_002898c4);
    if (iVar2 == 0) {
      iVar3 = func_0052FBA0(*piVar1 + 0x3dbbc,param_1[0x14]);
      if (iVar3 != 0) {
        return func_006615C4(param_1 + 0x103,2);
      }
      *(undefined1 *)((int)param_1 + 0x2d7) = 1;
      return 0;
    }
    iVar2 = func_0014EEB8((int)param_1,param_1 + 0x11e,DAT_002898cc,DAT_002898d0);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = func_00521054((int)param_1);
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = func_0052FBA0(*piVar1 + 0x3dbbc,param_1[0x14]);
  }
  else {
    iVar2 = func_0052FBA0(*DAT_002898a4 + 0x3dbbc,param_1[0x14]);
  }
  if (iVar2 == 0) {
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  }
  else {
    func_006615C4(param_1 + 0x103,1);
  }
  (**(code **)(param_1[200] + 0x30))(param_1 + 200);
  local_1c = s_SE_OctorokRock_BREAK_002898ac;
  local_20 = iVar3;
  return func_00150A84(param_1,&local_20,0);
}

