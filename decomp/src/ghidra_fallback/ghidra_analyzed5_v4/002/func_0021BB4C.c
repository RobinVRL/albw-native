#include "ghidra_types.h"

extern int func_0021A4F0(int *param_1);
extern int func_0021ABB0(int param_1);
extern int func_0021BC40(int *param_1);
extern int func_0065DFCC(undefined4 *param_1,undefined1 param_2);
extern float DAT_0021bc00;
extern int DAT_0021bc04;
extern int *DAT_0021bc08;
extern float DAT_0021bc0c;
extern float DAT_0021bc10;

// USA 0021BB4C <- EU 0021BB4C (Ghidra, non-matching)
// GLOBAL DAT_0021bc00 float
// GLOBAL DAT_0021bc04 int
// GLOBAL DAT_0021bc08 int *
// GLOBAL DAT_0021bc0c float
// GLOBAL DAT_0021bc10 float

void func_0021BB4C(int *param_1)

{
  float fVar1;
  int iVar2;
  
  func_0021A4F0(param_1);
  func_0021ABB0((int)param_1);
  func_0021BC40(param_1);
  fVar1 = DAT_0021bc00;
  if (ALBW_AS_F32(param_1[0xf8]) < DAT_0021bc00) {
    iVar2 = *DAT_0021bc08;
    if (*(char *)(DAT_0021bc04 + (int)param_1) != '\0') {
      iVar2 = -iVar2;
    }
    param_1[0x4d4] = iVar2 + param_1[0x4d4];
  }
  if ((ALBW_AS_F32(param_1[0xf8]) < fVar1) && (ALBW_AS_F32(param_1[0xf5]) < ALBW_AS_F32(param_1[3]) - DAT_0021bc0c)) {
    func_0065DFCC(param_1 + 0x22f,0);
  }
  param_1[0x140] = (int)(ALBW_AS_F32(param_1[0xf8]) * DAT_0021bc10);
  return;
}

