// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0046A7AC(int param_1,int *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern undefined DAT_0046b818;
extern undefined4 DAT_0046b824;
extern undefined DAT_0046b828;
extern int *DAT_0046b82c;
extern int *DAT_0046b830;
extern char s__Cancel_0046b81b[];
extern undefined4 _DAT_0046b818;

// USA 0046B6E0 <- EU 0046B6B8 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_0046b818 undefined
// GLOBAL DAT_0046b824 undefined4
// GLOBAL DAT_0046b828 undefined
// GLOBAL DAT_0046b82c int *
// GLOBAL DAT_0046b830 int *

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0046B6E0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define aiStack_38 ((int *)(albw_frame + 0x8))
  #define pcStack_24 (*(char * *)(albw_frame + 0x1c))
  fparam_0 = ALBW_AS_F32(_DAT_0046b818);
  *(undefined2 *)(param_1 + 0x74) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x74),fparam_0);
  uVar1 = DAT_0046b824;
  pcStack_24 = s__Cancel_0046b81b + 1;
  aiStack_38[4] = DAT_0046b824;
  func_0046A7AC(*(int *)(param_1 + 0xbc),aiStack_38 + 4);
  pcStack_24 = &DAT_0046b828;
  aiStack_38[4] = uVar1;
  func_0046A7AC(*(int *)(param_1 + 0xc0),aiStack_38 + 4);
  iVar3 = *(int *)(param_1 + 0xbc);
  if (*(char *)(iVar3 + 0x48) == '\0') {
    *(undefined2 *)(iVar3 + 0x20) = 0;
    func_002317C0((undefined2 *)(iVar3 + 0x20),fparam_0);
    *(undefined1 *)(iVar3 + 0x48) = 1;
  }
  func_002317C0((undefined2 *)(iVar3 + 0x2c),fparam_0);
  *(undefined1 *)(iVar3 + 0x49) = 0;
  iVar3 = *(int *)(param_1 + 0xc0);
  if (*(char *)(iVar3 + 0x48) != '\0') {
    *(undefined2 *)(iVar3 + 0x20) = 2;
    func_002317C0((undefined2 *)(iVar3 + 0x20),fparam_0);
    *(undefined1 *)(iVar3 + 0x48) = 0;
  }
  func_00231448(iVar3 + 0x2c);
  *(undefined1 *)(iVar3 + 0x49) = 0;
  *(undefined2 *)(param_1 + 0x80) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x80),fparam_0);
  if (*(int *)(param_1 + 200) != 0) {
    aiStack_38[3] = 0xffffffff;
    aiStack_38[0] = 0;
    aiStack_38[1] = 0;
    aiStack_38[2] = 0;
    iVar3 = func_005826A4(*DAT_0046b830,aiStack_38,DAT_0046b82c + -2,DAT_0046b82c);
    if (iVar3 != 0) {
      func_001788DC(*(int *)(param_1 + 0xcc),aiStack_38);
      piVar2 = *(int **)(param_1 + 200);
      iVar3 = *(int *)(param_1 + 0xcc);
      *(undefined2 *)(iVar3 + 0x32) = 0;
      *(undefined1 *)(iVar3 + 0x3d) = 0;
      (**(code **)(*piVar2 + 0x60))
                (piVar2,*(undefined4 *)(*(int *)(param_1 + 0xcc) + 8),0,
                 *(ushort *)(*(int *)(param_1 + 0xcc) + 0x20) >> 1);
    }
  }
  return;
}

