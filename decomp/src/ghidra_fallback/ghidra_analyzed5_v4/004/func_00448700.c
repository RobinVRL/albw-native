#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231448(int param_1);
extern int func_00231524(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002C00A8(int param_1);
extern int func_0044AFE8(int param_1);
extern int func_00532C78(int param_1);
extern int func_0058DD10(int param_1);
extern int *DAT_00448820;
extern float DAT_00448824;

// USA 00448700 <- EU 004486D8 (Ghidra, non-matching)
// GLOBAL DAT_00448820 int *
// GLOBAL DAT_00448824 float

void func_00448700(int param_1)

{
  char cVar1;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  float fparam_0;
  
  func_0044AFE8(param_1);
  iVar2 = *(int *)(param_1 + 0x230);
  bVar6 = (*(ushort *)(iVar2 + 0x16) & 0x40) != 0;
  if (bVar6) {
    iVar2 = *(int *)(iVar2 + 4);
  }
  if ((((!bVar6 || iVar2 == 0) && ('\0' < *(char *)(param_1 + 0x208))) &&
      (iVar2 = func_0058DD10(*DAT_00448820), iVar2 == 0)) &&
     (((cVar1 = *(char *)(param_1 + 0x15c), cVar1 == '\0' ||
       ((cVar1 == '\x03' || cVar1 == '\x02') || cVar1 == '\x01')) &&
      (*(char *)(param_1 + 0x292) == '\0')))) {
    iVar2 = *(int *)(param_1 + 0x230);
    iVar5 = *(int *)(param_1 + 0x22c);
    *(int *)(iVar2 + 4) = iVar5;
    puVar3 = (ushort *)(iVar2 + 0x16);
    uVar4 = *puVar3;
    if (iVar5 == 0) {
      uVar4 = uVar4 & 0xffbf;
    }
    else {
      uVar4 = uVar4 | 0x40;
    }
    *puVar3 = uVar4;
    func_002C00A8(*(int *)(param_1 + 0x230));
    fparam_0 = DAT_00448824;
    if ((*(ushort *)(param_1 + 0xec) & 0xff) == 0) {
      *(undefined2 *)(param_1 + 0xec) = 2;
      func_002317C0((undefined2 *)(param_1 + 0xec),fparam_0);
      bVar6 = func_00532C78(param_1 + 0x134);
      if (bVar6) {
        func_00231448(param_1 + 0x128);
        func_002313DC(param_1 + 0x14c);
      }
      else {
        func_00231524(param_1 + 0x134);
        func_00231448(param_1 + 0x128);
        *(undefined2 *)(param_1 + 0x14c) = 2;
        func_002317C0((undefined2 *)(param_1 + 0x14c),fparam_0);
      }
      *(undefined2 *)(param_1 + 0x140) = 2;
      func_002317C0((undefined2 *)(param_1 + 0x140),fparam_0);
      return;
    }
  }
  return;
}

