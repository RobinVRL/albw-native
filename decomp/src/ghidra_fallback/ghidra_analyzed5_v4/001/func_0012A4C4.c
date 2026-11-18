#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058E2B8(int *param_1);
extern int DAT_0012a56c;
extern float DAT_0012a570;
extern float DAT_0012a574;
extern int DAT_0012a578;

// USA 0012A4C4 <- EU 0012A4C4 (Ghidra, non-matching)
// GLOBAL DAT_0012a56c int
// GLOBAL DAT_0012a570 float
// GLOBAL DAT_0012a574 float
// GLOBAL DAT_0012a578 int

int func_0012A4C4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  float fparam_0;
  float fparam_0_00;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((int *)(albw_frame + 0x8))
  iVar4 = *(int *)(DAT_0012a56c + 8);
  iVar5 = *(int *)(DAT_0012a56c + 0xc);
  fparam_0 = DAT_0012a574;
  if (param_2 != 0) {
    iVar4 = *(int *)(DAT_0012a56c + 0x14);
    iVar5 = *(int *)(DAT_0012a56c + 0x18);
    fparam_0 = DAT_0012a570;
  }
  piVar6 = (int *)(param_1 + 0x904);
  fparam_0_00 = DAT_0012a570;
  iVar2 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x930),iVar4,iVar5,fparam_0);
  iVar1 = DAT_0012a578;
  iVar4 = 0;
  if (*piVar6 != 0) {
    local_28[0] = *(int *)(param_1 + 1000) - *(int *)(param_1 + 0x930);
    func_0058E2B8(local_28);
    iVar4 = func_0051D2F4(piVar6,0,iVar1,iVar5,fparam_0_00);
  }
  bVar8 = iVar2 == 0;
  iVar5 = 0;
  if (!bVar8) {
    iVar4 = *piVar6;
    iVar5 = iVar4 - iVar1;
  }
  bVar7 = !bVar8 && SBORROW4(iVar4,iVar1);
  iVar3 = iVar4;
  if ((bVar8 || iVar4 == iVar1) || iVar5 < 0 != bVar7) {
    iVar3 = iVar2;
  }
  if ((!bVar8 && iVar4 != iVar1) && iVar5 < 0 == bVar7) {
    iVar3 = 0;
  }
  return iVar3;
}

