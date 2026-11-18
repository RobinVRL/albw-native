#include "ghidra_types.h"

extern int func_0010BC94(undefined4 *param_1,undefined1 param_2);
extern int func_0010C7F8(int param_1,int param_2,float fparam_0);
extern int func_0053F090(int param_1);
extern int func_005568B0(int param_1);
extern int *DAT_00296454;
extern float DAT_00296458;

// USA 002963D0 <- EU 002963F8 (Ghidra, non-matching)
// GLOBAL DAT_00296454 int *
// GLOBAL DAT_00296458 float

void func_002963D0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  piVar1 = DAT_00296454;
  cVar2 = func_005568B0(*DAT_00296454);
  if ((cVar2 == '\0') && (iVar3 = func_0053F090(*piVar1), iVar3 != 0)) {
    if (*(uint *)(param_1 + 0x178) < 2) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x180) + 4);
    }
    func_0010C7F8(iVar3,0xf,DAT_00296458);
    func_0010BC94((undefined4 *)(param_1 + 0xc4),2);
  }
  return;
}

