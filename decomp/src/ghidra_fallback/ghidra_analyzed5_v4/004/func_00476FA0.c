#include "ghidra_types.h"

extern int func_0014CFA0(int param_1);
extern int func_00231340(short *param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00479214(int param_1,int param_2);
extern int func_00479404(int param_1);
extern int func_0047AF5C(int param_1);
extern float DAT_00476ff8;

// USA 00476FA0 <- EU 00476F78 (Ghidra, non-matching)
// GLOBAL DAT_00476ff8 float

void func_00476FA0(int param_1)

{
  float fparam_0;
  
  func_0014CFA0(param_1);
  if (*(char *)(param_1 + 0x30f) == '\0') {
    func_0047AF5C(param_1);
  }
  func_00479214(param_1,1);
  func_00479404(param_1);
  fparam_0 = DAT_00476ff8;
  *(undefined2 *)(param_1 + 0x1b8) = 2;
  func_002317C0((undefined2 *)(param_1 + 0x1b8),fparam_0);
  func_00231340((short *)(param_1 + 0x1b8));
  *(undefined2 *)(param_1 + 0x1c4) = 2;
  func_002317C0((undefined2 *)(param_1 + 0x1c4),fparam_0);
  func_00231340((short *)(param_1 + 0x1c4));
  *(undefined1 *)(param_1 + 0x30e) = 0;
  return;
}

