#include "ghidra_types.h"

extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_00165F84(void);
extern int func_00165FB8(int param_1);
extern int func_00166010(int param_1);
extern int func_002E1B70(int *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004EF418(int param_1,byte *param_2,int param_3,int param_4);
extern int func_0058DA24(int param_1);
extern int *DAT_00230d0c;
extern int *DAT_00230d10;
extern int *DAT_00230d14;

// USA 00230AD8 <- EU 00230AD8 (Ghidra, non-matching)
// GLOBAL DAT_00230d0c int *
// GLOBAL DAT_00230d10 int *
// GLOBAL DAT_00230d14 int *

undefined4 func_00230AD8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint in_fpscr;
  float fparam_0;
  
  if ((char)param_1[0x3e] == '\0') {
    if (*(char *)((int)param_1 + 0xfa) == '\0') {
      if (*(char *)((int)param_1 + 0xf9) == '\0') {
        *(undefined1 *)(param_1 + 0x4c) = 0;
        piVar5 = (int *)(param_1[0x49] + (char)param_1[0x43] * 8);
        uVar3 = *(uint *)(param_1[0x49] + (char)param_1[0x43] * 8 + 4);
        if ((uVar3 & 1) != 0) {
          piVar5 = (int *)(*piVar5 + *(int *)(param_1[0x47] + ((int)uVar3 >> 1)));
        }
        (*(code *)*piVar5)();
        iVar1 = param_1[0x42] + 1;
        param_1[0x42] = iVar1;
        if (param_1[0x46] != 0) {
          fparam_0 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
          func_00352210(param_1[0x46],1,fparam_0);
        }
        iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
        if (iVar1 != 0) {
          iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
          if (*(char *)(iVar1 + 0xda) == '\0') {
            piVar5 = (int *)(**(code **)(*param_1 + 0x40))(param_1);
            iVar1 = (**(code **)(*piVar5 + 0x28))(piVar5);
            if (((iVar1 != 0) && (iVar1 = func_0058DA24(*DAT_00230d10), iVar1 != 0)) &&
               (*(int *)(*(int *)(*DAT_00230d14 + 0x18) + 0x10c) < 1)) {
              func_00165E28((int)param_1,(short)param_1[0x3b]);
            }
          }
          else {
            iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
            if (*(char *)(iVar1 + 0xdb) == '\0') {
              iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
              if (*(char *)(iVar1 + 0x138) == -1) {
                (**(code **)(*param_1 + 0x44))(param_1);
              }
              else {
                iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
                iVar4 = (**(code **)(*param_1 + 0x40))(param_1);
                iVar1 = func_004EF418(*DAT_00230d0c,(byte *)(iVar4 + 0x138),
                                      (uint)*(byte *)(iVar1 + 0x144),0);
                if (iVar1 != 0) {
                  iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
                  *(undefined1 *)(iVar1 + 0xdb) = 1;
                }
              }
            }
          }
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0xf9) = 0;
        func_002E1B70(param_1 + 0x2b);
      }
    }
    else {
      func_00166010((int)param_1);
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_00165FB8((int)param_1);
    if (iVar1 == 0) {
      uVar2 = func_00165F84();
      return uVar2;
    }
    uVar2 = 1;
  }
  return uVar2;
}

