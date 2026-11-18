#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_0045fa0c;
extern float DAT_0045fa10;

// USA 0045F8B8 <- EU 0045F890 (Ghidra, non-matching)
// GLOBAL DAT_0045fa0c float
// GLOBAL DAT_0045fa10 float

void func_0045F8B8(int param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  bool bVar4;
  float fparam_0;
  
  uVar1 = func_00231448(param_1 + 0x100);
  fparam_0 = DAT_0045fa0c;
  puVar2 = (undefined2 *)(param_1 + 0x100);
  bVar4 = *(char *)(param_1 + 0x126) == '\0';
  if (bVar4) {
    uVar1 = (uint)*(byte *)(param_1 + 0x127);
  }
  if (bVar4 && uVar1 == 0) {
    *(undefined2 *)(param_1 + 0x11e) = 5;
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x102) = 1;
    *puVar2 = 0;
    func_002317C0(puVar2,fparam_0);
    iVar3 = *(int *)(param_1 + 0xa8);
    func_00231448(iVar3 + 0x70);
    *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined2 *)(iVar3 + 0x72) = 0;
    *(undefined2 *)(iVar3 + 0x70) = 0;
    func_002317C0((undefined2 *)(iVar3 + 0x70),fparam_0);
    iVar3 = *(int *)(param_1 + 0xac);
    func_00231448(iVar3 + 0x70);
    *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined2 *)(iVar3 + 0x72) = 0;
    *(undefined2 *)(iVar3 + 0x70) = 2;
    func_002317C0((undefined2 *)(iVar3 + 0x70),fparam_0);
  }
  else {
    *(undefined2 *)(param_1 + 0x11e) = 0;
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x102) = 3;
    *puVar2 = 0;
    if (*(char *)(param_1 + 0x127) != '\0') {
      fparam_0 = DAT_0045fa10;
    }
    func_002317C0(puVar2,fparam_0);
    iVar3 = *(int *)(param_1 + 0xa8);
    func_00231448(iVar3 + 0x70);
    *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined2 *)(iVar3 + 0x72) = 1;
    *(undefined2 *)(iVar3 + 0x70) = 0;
    func_002317C0((undefined2 *)(iVar3 + 0x70),fparam_0);
    iVar3 = *(int *)(param_1 + 0xac);
    func_00231448(iVar3 + 0x70);
    *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined2 *)(iVar3 + 0x72) = 1;
    *(undefined2 *)(iVar3 + 0x70) = 2;
    func_002317C0((undefined2 *)(iVar3 + 0x70),fparam_0);
  }
  if (*(char *)(param_1 + 0x125) < '\0') {
    *(char *)(param_1 + 0x125) = *(char *)(param_1 + 0x125) + '\x01';
  }
  return;
}

