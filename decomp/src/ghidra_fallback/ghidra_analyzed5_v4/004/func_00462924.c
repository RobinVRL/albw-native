#include "ghidra_types.h"

extern int func_0051E5B8(int param_1);
extern int func_0051E5D8(int param_1);
extern int func_0055693C(int param_1,undefined4 *param_2);
extern int func_0057D2C4(int *param_1,float *param_2,float *param_3);
extern int func_005801EC(int param_1,float *param_2,float *param_3);
extern int *DAT_004629f8;
extern int *DAT_004629fc;
extern undefined4 DAT_00462a00;
extern float DAT_00462a04;
extern float DAT_00462a08;

// USA 00462924 <- EU 004628FC (Ghidra, non-matching)
// GLOBAL DAT_004629f8 int *
// GLOBAL DAT_004629fc int *
// GLOBAL DAT_00462a00 undefined4
// GLOBAL DAT_00462a04 float
// GLOBAL DAT_00462a08 float

void func_00462924(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define fStack_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define afStack_24 ((float *)(albw_frame + 0xc))
  iVar2 = *DAT_004629f8;
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 0x82) == '\0') {
      func_0055693C(iVar2,&local_30);
    }
    else {
      pfVar3 = *(float **)(iVar2 + 0x1c);
      local_30 = *pfVar3;
      fStack_2c = pfVar3[1];
      local_28 = pfVar3[2];
    }
    iVar5 = *DAT_004629fc;
    iVar2 = func_0051E5B8(iVar5);
    piVar4 = (int *)func_0051E5D8(iVar5);
    func_005801EC(iVar2,afStack_24,&local_30);
    func_0057D2C4(piVar4,(float *)(param_1 + 0x74),afStack_24);
    fVar1 = DAT_00462a08;
    fVar8 = DAT_00462a04;
    fVar6 = *(float *)(param_1 + 0x74);
    fVar7 = DAT_00462a04;
    if ((DAT_00462a04 <= fVar6) && (fVar7 = fVar6, DAT_00462a08 < fVar6)) {
      fVar7 = DAT_00462a08;
    }
    *(float *)(param_1 + 0x74) = fVar7;
    fVar7 = *(float *)(param_1 + 0x78);
    if ((fVar8 <= fVar7) && (fVar8 = fVar7, fVar1 < fVar7)) {
      fVar8 = fVar1;
    }
    *(float *)(param_1 + 0x78) = fVar8;
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  return;
}

