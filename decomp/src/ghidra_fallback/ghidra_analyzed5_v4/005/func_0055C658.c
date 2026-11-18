#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0055696C(int param_1,int param_2);
extern int func_00556EAC(int param_1,int param_2);
extern int *DAT_0055c718;
extern float DAT_0055c71c;

// USA 0055C658 <- EU 0055C630 (Ghidra, non-matching)
// GLOBAL DAT_0055c718 int *
// GLOBAL DAT_0055c71c float

undefined4 func_0055C658(int *param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define fStack_1c (*(float *)(albw_frame + 0x4))
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  piVar1 = DAT_0055c718;
  bVar2 = func_00556EAC(*DAT_0055c718,0x35);
  if ((((bVar2) || (bVar2 = func_00556EAC(*piVar1,0x4c), bVar2)) ||
      (bVar2 = func_00556EAC(*piVar1,0x4b), bVar2)) ||
     ((bVar2 = func_00556EAC(*piVar1,0x34), bVar2 ||
      ((bVar2 = func_00556EAC(*piVar1,0x53), bVar2 && (uVar3 = func_0055696C(*piVar1,7), 2 < uVar3))
      )))) {
    fVar5 = DAT_0055c71c;
    func_00115C70(&local_20,*(float **)(*piVar1 + 0x1c),(float *)(*param_1 + 0x3d0));
    iVar4 = *param_1;
    if (fVar5 < local_20 * *(float *)(iVar4 + 0x958) + fStack_1c * *(float *)(iVar4 + 0x95c) +
                fStack_18 * *(float *)(iVar4 + 0x960)) {
      return 1;
    }
  }
  return 0;
}

