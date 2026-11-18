#include "ghidra_types.h"

extern int func_00563220(int param_1,uint *param_2,int param_3);
extern int func_005632B0(uint *param_1,uint *param_2,int param_3);
extern int func_00563548(uint *param_1,uint *param_2,int param_3);
extern uint DAT_005638c8;
extern uint DAT_005638cc;
extern float DAT_005638d0;
extern float DAT_005638d4;
extern float DAT_005638d8;
extern int DAT_005638dc;
extern float DAT_005638e0;
extern float DAT_005638e4;
extern uint DAT_005638e8;
extern uint DAT_005638ec;

// USA 00563710 <- EU 005636E8 (Ghidra, non-matching)
// GLOBAL DAT_005638c8 uint
// GLOBAL DAT_005638cc uint
// GLOBAL DAT_005638d0 float
// GLOBAL DAT_005638d4 float
// GLOBAL DAT_005638d8 float
// GLOBAL DAT_005638dc int
// GLOBAL DAT_005638e0 float
// GLOBAL DAT_005638e4 float
// GLOBAL DAT_005638e8 uint
// GLOBAL DAT_005638ec uint

/* WARNING: Removing unreachable block (ram,0x0056373c) */

uint * func_00563710(uint *param_1,uint *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  
  puVar3 = func_00563220((int)param_1,param_2,param_3);
  puVar3 = func_005632B0(param_1,puVar3,0);
  puVar3 = func_00563548(param_1 + 0xf,puVar3,0);
  uVar2 = DAT_005638c8;
  *puVar3 = *(uint *)((int)param_1 + 0x76) & 0xffffff | (uint)*(byte *)((int)param_1 + 0x79) << 0x18
  ;
  puVar3[1] = uVar2;
  puVar3[2] = param_1[0x19] >> 0x10 | param_1[0x19] << 0x10;
  puVar3[3] = uVar2 + 1;
  uVar2 = DAT_005638cc;
  cVar1 = (char)param_1[0x1b];
  if ((cVar1 == '\x03' || cVar1 == '\x04') || (cVar1 == '\x05')) {
    iVar6 = 1;
  }
  else {
    iVar6 = 0;
  }
  if ((char)param_1[0x1a] == '\f') {
    iVar4 = 2;
  }
  else {
    iVar4 = 0;
  }
  puVar3[4] = (uint)*(byte *)((int)param_1 + 0x6b) << 1 | iVar6 << 2 | iVar4 << 4 |
              (uint)*(byte *)((int)param_1 + 0x69) << 8 |
              (uint)*(byte *)((int)param_1 + 0x6a) << 0xc |
              (uint)(cVar1 == '\x02' || cVar1 == '\x05') << 0x18;
  uVar5 = 0;
  uVar7 = uVar2 + 1;
  puVar3[5] = uVar2;
  if ((char)param_1[0x1b] == '\x03' || (char)param_1[0x1b] == '\0') {
    puVar3[6] = 0;
    puVar3[7] = uVar7;
    goto LAB_005638a4;
  }
  fVar10 = ALBW_AS_F32(param_1[0x1c]);
  if ((fVar10 != DAT_005638d0) && ((uint)((int)ALBW_AS_U32(fVar10) << 1) >> 0x18 != 0xff)) {
    fVar9 = (fVar10 + DAT_005638d4) * DAT_005638d8;
    fVar10 = DAT_005638d0;
    if (DAT_005638d0 <= fVar9) {
      bVar8 = SBORROW4((int)ALBW_AS_U32(fVar9),0x46000000);
      iVar6 = (int)ALBW_AS_U32(fVar9) + -0x46000000;
      fVar10 = DAT_005638e4;
      if ((int)ALBW_AS_U32(fVar9) < 0x46000000) {
        bVar8 = SBORROW4((int)ALBW_AS_U32(fVar9),DAT_005638dc);
        iVar6 = (int)ALBW_AS_U32(fVar9) - DAT_005638dc;
        fVar10 = fVar9;
      }
      if (iVar6 < 0 == bVar8) {
        uVar5 = VectorFloatToUnsigned(fVar10 - DAT_005638e0,3);
        goto LAB_00563888;
      }
    }
    uVar5 = VectorFloatToUnsigned(fVar10 + DAT_005638e0,3);
  }
LAB_00563888:
  puVar3[6] = uVar5 | (uint)*(byte *)((int)param_1 + 0x75) << 0x10 |
              (uint)(byte)param_1[0x1d] << 0x18;
  puVar3[7] = uVar7;
LAB_005638a4:
  uVar2 = DAT_005638e8;
  puVar3[8] = param_1[0x18] >> 3;
  uVar5 = DAT_005638ec;
  puVar3[9] = uVar2;
  puVar3[10] = (uint)(byte)param_1[0x1a];
  puVar3[0xb] = uVar5;
  return puVar3 + 0xc;
}

