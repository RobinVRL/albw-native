#include "ghidra_types.h"

extern int func_002CB6D8(undefined4 *param_1,int param_2,int param_3);
extern int func_0040411C(undefined4 param_1);
extern int func_00404138(undefined4 param_1,undefined1 param_2);
extern int func_00405810(int *param_1,int *param_2);
extern int func_00405AE0(undefined4 *param_1,int param_2,int param_3,float *param_4,char param_5);
extern char *DAT_0012f5fc;
extern int DAT_0012f600;
extern int DAT_0012f604;
extern int *DAT_0012f608;

// USA 0012F4D4 <- EU 0012F4D4 (Ghidra, non-matching)
// GLOBAL DAT_0012f5fc char *
// GLOBAL DAT_0012f600 int
// GLOBAL DAT_0012f604 int
// GLOBAL DAT_0012f608 int *

int * func_0012F4D4(undefined4 *param_1,int param_2,int param_3,float *param_4)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  
  pcVar1 = DAT_0012f5fc;
  piVar2 = func_00405AE0(param_1,param_2,param_3,param_4,*DAT_0012f5fc);
  iVar6 = DAT_0012f604;
  *piVar2 = DAT_0012f600;
  piVar2[0x41] = iVar6;
  piVar2[0x42] = iVar6;
  piVar2[0x43] = iVar6;
  piVar2[0x44] = iVar6;
  iVar3 = func_002CB6D8(piVar2 + 0x45,(int)piVar2,0);
  *(int *)(iVar3 + 0x30) = iVar6;
  *(undefined1 *)(iVar3 + 0x34) = 0;
  bVar5 = *(int *)(iVar3 + -0x4c) != iVar3;
  *(byte *)(iVar3 + -0x20) = *(byte *)(iVar3 + -0x20) | bVar5 << 2;
  if (bVar5) {
    *(int *)(iVar3 + -0x4c) = iVar3;
  }
  *(undefined4 *)(iVar3 + -8) = *(undefined4 *)(iVar3 + -0x5c);
  *(undefined4 *)(iVar3 + -4) = *(undefined4 *)(iVar3 + -0x58);
  if ((((*pcVar1 == '\0') && (*(char *)(iVar3 + -0x7b) != '!')) &&
      ((*(byte *)(param_2 + 0x5e) & 2) == 0)) &&
     (func_00405810((int *)(iVar3 + -0x114),(int *)(*DAT_0012f608 + 0x77c)),
     *(int *)(*(int *)(iVar3 + -0x18) + 0xc) != 0)) {
    func_0040411C(*(undefined4 *)(iVar3 + -0x14));
    uVar4 = func_00404138(*(int *)(*(int *)(iVar3 + -0x18) + 0xc) << 2,0x10);
    *(undefined4 *)(iVar3 + -0x14) = uVar4;
    *(undefined4 *)(*(int *)(iVar3 + -0x18) + 0x10) = uVar4;
    *(undefined4 *)(*(int *)(iVar3 + -0x18) + 0x18) = *(undefined4 *)(*(int *)(iVar3 + -0x18) + 0xc)
    ;
    *(undefined1 *)(*(int *)(iVar3 + -0x18) + 6) = 0;
  }
  return (int *)(iVar3 + -0x114);
}

