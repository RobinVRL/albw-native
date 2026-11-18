#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0043C694(int param_1);
extern int func_00447E28(int param_1,int param_2,int *param_3,int param_4);
extern float DAT_00448d74;
extern int *DAT_00448d78;
extern undefined4 DAT_00448d7c;

// USA 00448CA8 <- EU 00448C80 (Ghidra, non-matching)
// GLOBAL DAT_00448d74 float
// GLOBAL DAT_00448d78 int *
// GLOBAL DAT_00448d7c undefined4

void func_00448CA8(int param_1)

{
  undefined4 uVar1;
  float fparam_0;
  
  func_00231448(param_1 + 0xd4);
  fparam_0 = DAT_00448d74;
  func_002317C0((undefined2 *)(param_1 + 0xe0),DAT_00448d74);
  func_0043C694(*(int *)(*DAT_00448d78 + 0x80));
  func_00231448(param_1 + 0x11c);
  func_002317C0((undefined2 *)(param_1 + 0x110),fparam_0);
  if (*(char *)(*(int *)(param_1 + 0x210) + 0x5d) == '\0') {
    if (*(char *)(param_1 + 0x290) != '\0') {
      *(undefined2 *)(param_1 + 200) = 0;
      func_002317C0((undefined2 *)(param_1 + 200),fparam_0);
      uVar1 = DAT_00448d7c;
      *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x248);
      *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x24c);
      *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_1 + 0x288);
      *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_1 + 0x28c);
      *(undefined4 *)(param_1 + 0x260) = uVar1;
      func_00447E28(param_1,1,*(int **)(param_1 + 0x23c),0);
      func_00447E28(param_1,0,*(int **)(param_1 + 0x240),0);
      *(undefined1 *)(param_1 + 0x294) = 1;
    }
    func_00231448(param_1 + 0x104);
    func_002317C0((undefined2 *)(param_1 + 0xf8),fparam_0);
    return;
  }
  return;
}

