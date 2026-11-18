#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_003840A0(int param_1,int param_2);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_00543170(int param_1);
extern int func_00556EAC(int param_1,int param_2);
extern int func_0058A7D4(void);
extern int *DAT_003b84d8;
extern int DAT_003b84dc;
extern int DAT_003b84e0;

// USA 003B8384 <- EU 003B8360 (Ghidra, non-matching)
// GLOBAL DAT_003b84d8 int *
// GLOBAL DAT_003b84dc int
// GLOBAL DAT_003b84e0 int

undefined4 func_003B8384(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = param_1[0x12];
  if (*(char *)(iVar6 + 0x936) != '\x02') {
    iVar3 = func_00543170(iVar6);
    piVar1 = DAT_003b84d8;
    if ((((iVar3 != 0) || (*(char *)(iVar6 + 0xb40) == '\0')) &&
        (*(char *)(param_1[0x12] + 0xb35) == '\0')) &&
       (((bVar2 = func_00556EAC(*DAT_003b84d8,0x2b), !bVar2 &&
         (bVar2 = func_00556EAC(*piVar1,0x2c), !bVar2)) &&
        ((bVar2 = func_00556EAC(*piVar1,0x2f), !bVar2 &&
         (bVar2 = func_00556EAC(*piVar1,0x2e), !bVar2)))))) {
      iVar6 = param_1[0x12];
      if (*(char *)(*(int *)(iVar6 + 0x8bc) + 4) == '\0') {
        if (*(int *)(iVar6 + 0xa00) < DAT_003b84e0) {
          puVar4 = (uint *)func_0058A7D4();
          uVar5 = func_00111A64(puVar4);
          if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) < 0x1f) goto LAB_003b847c;
        }
      }
      else if (*(int *)(iVar6 + 0xa00) < DAT_003b84dc) {
        puVar4 = (uint *)func_0058A7D4();
        uVar5 = func_00111A64(puVar4);
        if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) < 0x29) {
LAB_003b847c:
          (**(code **)(*param_1 + 0x138))(param_1,0xc,1);
          return 0;
        }
      }
    }
    bVar2 = func_003840A0(param_1[0x12] + 0x8c0,10);
    if (!bVar2) {
      func_003842C0(param_1[0x12] + 0x8c0,10,10,1);
    }
  }
  return 1;
}

