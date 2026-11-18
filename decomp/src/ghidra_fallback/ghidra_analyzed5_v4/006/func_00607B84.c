#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004BC8D8(int param_1);
extern int func_004BD280();
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C17C0(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int iRam00607c44;
extern undefined4 uRam00607c40;
extern undefined4 DAT_00607c30;
extern int *DAT_00607c34;
extern int DAT_00607c38;
extern undefined4 *DAT_00607c3c;

// USA 00607B84 <- EU 00607B5C (Ghidra, non-matching)
// GLOBAL DAT_00607c30 undefined4
// GLOBAL DAT_00607c34 int *
// GLOBAL DAT_00607c38 int
// GLOBAL DAT_00607c3c undefined4 *
// GLOBAL UNK_00607c40 undefined4
// GLOBAL UNK_00607c44 int

int * func_00607B84(uint *param_1)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 extraout_r1;
  undefined4 uVar6;
  int *piVar7;
  
  puVar4 = (undefined4 *)func_0010BAB4(DAT_00607c30);
  piVar5 = (int *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    piVar7 = DAT_00607c34;
    piVar5 = func_00339CC4(puVar4,param_1,5,DAT_00607c34,0xff);
    iVar2 = DAT_00607c38;
    *piVar5 = DAT_00607c38;
    sVar1 = *(short *)((int)piVar5 + 0x32);
    piVar5[200] = iVar2 + 0xb8;
    func_004C03B8((int)piVar5,DAT_00607c3c);
    func_004C17C0((int)piVar5);
    func_004BC8D8((int)piVar5);
    if ((sVar1 != 1) && (bVar3 = func_00588BF0((int)piVar5,0), !bVar3)) {
      uVar6 = 0;
      *(undefined1 *)((int)piVar5 + 0x853) = 4;
      func_004BD280((int)piVar5,4,0);
      func_00169A80((int *)piVar5[0x1eb],extraout_r1,uVar6,piVar7);
      func_00168E9C((int *)piVar5[0x1eb],piVar5[0x1e8],(int *)0x0);
      iVar2 = iRam00607c44;
      *(undefined4 *)(piVar5[0x1e8] + 0x134) = uRam00607c40;
      piVar5[0x20a] = iVar2;
    }
  }
  return piVar5;
}

