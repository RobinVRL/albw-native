#include "ghidra_types.h"

extern int func_002694A4(int param_1,int param_2);
extern int func_004ED46C(int param_1,int param_2);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_0051D50C(int param_1);
extern int func_00660718(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00266d48;
extern undefined4 DAT_00266d4c;

// USA 00266C68 <- EU 00266C90 (Ghidra, non-matching)
// GLOBAL DAT_00266d48 int *
// GLOBAL DAT_00266d4c undefined4

undefined4 func_00266C68(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  float fparam_0;
  
  fparam_0 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fparam_0);
  piVar1 = DAT_00266d48;
  bVar3 = func_0051D50C(*DAT_00266d48);
  if (!bVar3) {
    func_004ED46C(*piVar1,2);
  }
  if (*(int *)(param_1 + 0xb94) < 1) {
    if (*(uint *)(param_1 + 0xb00) <= *(uint *)(param_1 + 0xafc)) {
      return func_00660718((undefined4 *)(param_1 + 0x8c8),0xd);
    }
    *(uint *)(param_1 + 0xafc) = *(uint *)(param_1 + 0xafc) + 1;
  }
  else if (*(uint *)(param_1 + 0xaf0) < *(uint *)(param_1 + 0xaf4)) {
    *(uint *)(param_1 + 0xaf0) = *(uint *)(param_1 + 0xaf0) + 1;
  }
  else {
    func_002694A4(param_1,0);
    uVar2 = DAT_00266d4c;
    *(undefined4 *)(param_1 + 0xaf4) = 0x3c;
    *(undefined4 *)(param_1 + 0xaf8) = uVar2;
    *(undefined4 *)(param_1 + 0xaf0) = 0;
  }
  return 0;
}

