#include "ghidra_types.h"

extern int func_0015B580(int param_1,uint param_2);
extern int func_00161178(undefined4 *param_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0036BE78();
extern int func_0058A8F0(int param_1);
extern int func_0065836C(undefined4 *param_1,undefined1 param_2);
extern int DAT_0015acfc;

// USA 0015ABE8 <- EU 0015ABEC (Ghidra, non-matching)
// GLOBAL DAT_0015acfc int

undefined4 func_0015ABE8(undefined4 *param_1,undefined4 param_2,uint param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if ((int *)param_1[0x397] != (int *)0x0) {
    func_00169A80((int *)param_1[0x397],param_2,param_3,param_4);
    func_00168E9C((int *)param_1[0x397],param_1[0x103],(int *)0x0);
  }
  iVar1 = func_0058A8F0((int)param_1);
  if (iVar1 != 0) {
    puVar2 = func_00161178(param_1);
    if ((puVar2 != (undefined4 *)0x0) && (*(char *)(puVar2 + 0x230) != '\x16')) {
      func_0065836C(puVar2 + 0x22f,0x1d);
    }
    if (((int)*(short *)((int)param_1 + 0x2e) & 0xffU) != 0) {
      uVar3 = (int)*(short *)((int)param_1 + 0x2e) & 0xff;
      if ((uVar3 < 4) && (1 < uVar3)) {
        iVar1 = uVar3 - 2;
      }
      else {
        iVar1 = -1;
      }
      if (-1 < iVar1) goto LAB_0015acf0;
    }
    uVar3 = 0;
    *(bool *)((int)param_1 + 0x859) = 0 < *(short *)(DAT_0015acfc + (int)param_1);
    do {
      puVar2 = func_0015B580((int)param_1,uVar3);
      if (puVar2 != (undefined4 *)0x0) {
        *(bool *)((int)puVar2 + 0x859) = 0 < *(short *)(DAT_0015acfc + (int)puVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 2);
  }
LAB_0015acf0:
  return func_0036BE78((int)(param_1 + 0x398));
}

