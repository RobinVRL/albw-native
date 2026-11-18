#include "ghidra_types.h"

extern int func_001B6C04(int param_1);
extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern undefined4 func_002316CC(int param_1,float fparam_0);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0055696C(int param_1,int param_2);
extern float DAT_00454c00;
extern int *DAT_00454c04;
extern float DAT_00454c08;
extern float DAT_00454c0c;

// USA 00454B94 <- EU 00454B6C (Ghidra, non-matching)
// GLOBAL DAT_00454c00 float
// GLOBAL DAT_00454c04 int *
// GLOBAL DAT_00454c08 float
// GLOBAL DAT_00454c0c float

undefined4 func_00454B94(int param_1)

{
  int iVar1;
  float fparam_0;
  
  func_001B6C04(param_1);
  fparam_0 = DAT_00454c00;
  func_002317C0((undefined2 *)(param_1 + 0x74),DAT_00454c00);
  *(undefined1 *)(param_1 + 0xd9) = 0;
  *(undefined2 *)(param_1 + 0xa0) = 0;
  if (*(char *)(param_1 + 0xd8) == '\0') {
    func_002313DC(param_1 + 0xa0);
  }
  else {
    func_00231524(param_1 + 0xa0);
  }
  if (*DAT_00454c04 != 0) {
    iVar1 = func_0055696C(*DAT_00454c04,0x1f);
    if ((iVar1 != 3) && (fparam_0 = DAT_00454c08, iVar1 != 4)) {
      fparam_0 = DAT_00454c0c;
    }
    return func_002316CC(param_1 + 0xac,fparam_0);
  }
  return 0;
}

