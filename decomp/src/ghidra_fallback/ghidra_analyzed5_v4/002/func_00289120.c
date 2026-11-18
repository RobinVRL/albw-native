#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_006615C4(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00289298;
extern uint *DAT_0028929c;
extern undefined4 *DAT_002892a0;
extern undefined4 DAT_002892a4;
extern int *DAT_002892a8;
extern int DAT_002892ac;
extern int *DAT_002892c0;
extern char s_SE_Octorok_SHOT_002892b0[];
extern char s_SE_Slarok_SHOT_002892c4[];

// USA 00289120 <- EU 00289148 (Ghidra, non-matching)
// GLOBAL DAT_00289298 int *
// GLOBAL DAT_0028929c uint *
// GLOBAL DAT_002892a0 undefined4 *
// GLOBAL DAT_002892a4 undefined4
// GLOBAL DAT_002892a8 int *
// GLOBAL DAT_002892ac int
// GLOBAL DAT_002892c0 int *
// GLOBAL s_SE_Octorok_SHOT_002892b0 string
// GLOBAL s_SE_Slarok_SHOT_002892c4 string

undefined4 func_00289120(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  if (*(char *)(param_1 + 0x410) == '\x02') {
    piVar2 = (int *)func_0052FBA0(*DAT_00289298 + 0x3dbbc,param_4);
    if (((*DAT_0028929c & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0028929c), iVar3 != 0)) {
      *DAT_002892a0 = DAT_002892a4;
    }
    if ((piVar2 == (int *)0x0) || (iVar3 = (**(code **)*piVar2)(piVar2,DAT_002892a0), iVar3 == 0)) {
      piVar2 = (int *)0x0;
    }
    if (piVar2 != (int *)0x0) {
      iVar4 = func_00588BE4(param_1);
      iVar3 = DAT_002892ac;
      if (iVar4 == *DAT_002892a8) {
        local_1c = s_SE_Octorok_SHOT_002892b0;
        local_20 = DAT_002892ac;
        func_0014DBF4(piVar2,&local_20,param_2,0);
      }
      else {
        iVar4 = func_00588BE4(param_1);
        if (iVar4 == *DAT_002892c0) {
          local_1c = s_SE_Slarok_SHOT_002892c4;
          local_20 = iVar3;
          func_0014DBF4(piVar2,&local_20,param_2,0);
        }
      }
    }
    uVar1 = param_2[1];
    uVar5 = param_2[2];
    *(undefined4 *)(param_1 + 0x3d0) = *param_2;
    *(undefined4 *)(param_1 + 0x3d4) = uVar1;
    *(undefined4 *)(param_1 + 0x3d8) = uVar5;
    *(undefined4 *)(param_1 + 1000) = param_3;
    func_006615C4((undefined4 *)(param_1 + 0x40c),0);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

