#include "ghidra_types.h"

extern int func_00400254(undefined4 *param_1,int param_2,float *param_3);
extern int func_0040071C(undefined4 *param_1,int param_2,undefined4 param_3,float *param_4);
extern int func_00405138(undefined4 *param_1,int param_2,int param_3,float *param_4);
extern int func_004054E4(undefined4 *param_1,int param_2,int param_3,float *param_4);
extern int func_00405AE0(undefined4 *param_1,int param_2,int param_3,float *param_4,char param_5);
extern int func_00405F04(undefined4 *param_1,int param_2,undefined4 param_3,float *param_4);
extern int DAT_004042e0;
extern undefined4 *DAT_004042e4;
extern int DAT_004042e8;

// USA 0040415C <- EU 0040413C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// GLOBAL DAT_004042e0 int
// GLOBAL DAT_004042e4 undefined4 *
// GLOBAL DAT_004042e8 int

byte * func_0040415C(undefined4 param_1,int param_2,int param_3,int param_4,float *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  
  piVar1 = (int *)*DAT_004042e4;
  if (param_2 == DAT_004042e0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1,0xa4,4,*(code **)(*piVar1 + 8),param_4)
    ;
    if (puVar2 != (undefined4 *)0x0) {
      pbVar3 = (byte *)func_00400254(puVar2,param_3,param_5);
      return pbVar3;
    }
  }
  else if (param_2 < DAT_004042e0) {
    iVar4 = param_2 + DAT_004042e8;
    if (iVar4 == 0) {
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1,0xc0,4);
      if (puVar2 != (undefined4 *)0x0) {
        pbVar3 = func_004054E4(puVar2,param_3,param_4,param_5);
        return pbVar3;
      }
    }
    else if (iVar4 == 0x104f2) {
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1,0xa4,4);
      if (puVar2 != (undefined4 *)0x0) {
        pbVar3 = (byte *)func_00405F04(puVar2,param_3,param_4,param_5);
        return pbVar3;
      }
    }
    else if ((iVar4 == 0x10507) &&
            (puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1,0xd8,4),
            puVar2 != (undefined4 *)0x0)) {
      pbVar3 = func_00405138(puVar2,param_3,param_4,param_5);
      return pbVar3;
    }
  }
  else if (param_2 - DAT_004042e0 == 0x61100) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1,0xb0,4);
    if (puVar2 != (undefined4 *)0x0) {
      pbVar3 = (byte *)func_0040071C(puVar2,param_3,param_4,param_5);
      return pbVar3;
    }
  }
  else if ((param_2 - DAT_004042e0 == 0x61704) &&
          (puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1,0x104,4),
          puVar2 != (undefined4 *)0x0)) {
    pbVar3 = (byte *)func_00405AE0(puVar2,param_3,param_4,param_5,'\0');
    return pbVar3;
  }
  return (byte *)0x0;
}

