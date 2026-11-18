#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001A5458(int param_1,undefined4 *param_2,uint param_3);
extern int func_00520FC0(void);
extern float func_00521298(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern int DAT_001a5e4c;
extern uint *DAT_001a5e50;
extern int DAT_001a5e54;

// USA 001A5D24 <- EU 001A5D24 (Ghidra, non-matching)
// GLOBAL DAT_001a5e4c int
// GLOBAL DAT_001a5e50 uint *
// GLOBAL DAT_001a5e54 int

undefined4 func_001A5D24(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  ushort uVar5;
  uint in_r2;
  float *pfVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_20 ((float *)(albw_frame + 0x0))
  #define local_14 ((int *)(albw_frame + 0xc))
  uVar5 = (ushort)*(byte *)(param_1 + 0x94f);
  bVar7 = uVar5 == 0;
  if (bVar7) {
    uVar5 = *(ushort *)(param_1 + 0x94c);
  }
  if (bVar7 && uVar5 == 0) {
    if (*(char *)(param_1 + 0x950) != '\0') {
      return 1;
    }
    fVar8 = func_00521298(param_1);
    if ((int)ALBW_AS_U32(fVar8) < DAT_001a5e4c) {
      puVar1 = (undefined4 *)func_00520FC0();
      iVar2 = func_001A5458(param_1,puVar1,in_r2);
      if (iVar2 == 0) {
        return 1;
      }
    }
    pfVar3 = (float *)func_00520FC0();
    pfVar6 = (float *)(param_1 + 0x3d0);
    func_00115C70(afStack_20,pfVar3,pfVar6);
    iVar2 = *(int *)(param_1 + 1000);
    local_14[0] = func_0068C690(afStack_20);
    local_14[0] = iVar2 - local_14[0];
    uVar4 = func_0058E2B8(local_14);
    if ((uVar4 <= *DAT_001a5e50) &&
       (pfVar3 = (float *)func_00520FC0(), fVar8 = *(float *)(param_1 + 0x91c) - *pfVar3,
       fVar9 = *(float *)(param_1 + 0x924) - pfVar3[2],
       (int)ALBW_AS_U32((fVar8 * fVar8 + fVar9 * fVar9)) < DAT_001a5e54)) {
      puVar1 = (undefined4 *)func_00520FC0();
      iVar2 = func_001A5458(param_1,puVar1,(uint)pfVar6);
      if (iVar2 == 0) {
        return 1;
      }
    }
  }
  return 0;
}

