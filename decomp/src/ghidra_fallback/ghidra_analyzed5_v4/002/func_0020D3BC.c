#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern float DAT_0020d4e0;
extern float DAT_0020d4e4;
extern float DAT_0020d4e8;
extern float DAT_0020d4ec;

// USA 0020D3BC <- EU 0020D3BC (Ghidra, non-matching)
// GLOBAL DAT_0020d4e0 float
// GLOBAL DAT_0020d4e4 float
// GLOBAL DAT_0020d4e8 float
// GLOBAL DAT_0020d4ec float

undefined4 func_0020D3BC(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  
  if (*(int *)(param_1 + 0xbbc) == 0x1e) {
    puVar3 = (undefined4 *)func_00520FC0();
    *(undefined4 *)(param_1 + 0xbf8) = *puVar3;
    *(undefined4 *)(param_1 + 0xbfc) = puVar3[1];
    *(undefined4 *)(param_1 + 0xc00) = puVar3[2];
  }
  uVar8 = func_0058AB74(param_1);
  fVar2 = DAT_0020d4e4;
  fVar1 = DAT_0020d4e0;
  if ((int)uVar8 == 0x10) {
    iVar5 = func_0058A8F0(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    return func_004FABDC(param_1,0x11,1,0);
  }
  if (*(uint *)(param_1 + 0xbbc) < *(uint *)(param_1 + 0xbc0)) {
    *(uint *)(param_1 + 0xbbc) = *(uint *)(param_1 + 0xbbc) + 1;
  }
  pfVar4 = (float *)(param_1 + 0xbe4);
  fVar7 = *pfVar4;
  fVar6 = fVar1 - fVar7;
  if (fVar2 < fVar6) {
    fVar7 = fVar7 + fVar2;
  }
  else {
    if (DAT_0020d4e8 <= fVar6) {
      *pfVar4 = fVar1;
      goto LAB_0020d468;
    }
    fVar7 = fVar7 - fVar2;
  }
  *pfVar4 = fVar7;
LAB_0020d468:
  *(int *)(param_1 + 1000) =
       (int)(*(float *)(param_1 + 0xbe4) * DAT_0020d4ec) + *(int *)(param_1 + 1000);
  if (*(uint *)(param_1 + 0xbc0) <= *(uint *)(param_1 + 0xbbc)) {
    func_0065D630((undefined4 *)(param_1 + 0x8bc),0x16);
  }
  return 0;
}

