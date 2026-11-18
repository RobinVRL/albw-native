#include "ghidra_types.h"

extern int func_004C9B74(int param_1);
extern int func_004CADD8(undefined4 param_1,uint param_2);
extern int func_004CB500(int param_1);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_004FAD90(int param_1);
extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_00520FC0(void);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern int DAT_004ca0b0;
extern float DAT_004cb56c;

// USA 004CA000 <- EU 004C9FD8 (Ghidra, non-matching)
// GLOBAL DAT_004ca0b0 int
// GLOBAL DAT_004cb56c float

undefined4 func_004CA000(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    puVar6 = (undefined4 *)(param_1 + 0x8bc);
    if (0 < *(short *)(DAT_004ca0b0 + param_1)) {
      func_004FABDC(param_1,0,0xffffffff,0);
      if (*(char *)(param_1 + 0x8e5) == '\x02') {
        iVar2 = func_004C9B74(param_1);
        if (iVar2 == 0) {
          return func_0066A284(puVar6,3);
        }
        return func_0066A284(puVar6,7);
      }
      if (*(char *)(param_1 + 0x98e) == '\0') {
        if (*(char *)(param_1 + 0x978) == '\0') {
          return func_0066A284(puVar6,4);
        }
        pfVar4 = (float *)func_00520FC0();
        fVar8 = *(float *)(param_1 + 0x3d0) - *pfVar4;
        fVar7 = *(float *)(param_1 + 0x3d8) - pfVar4[2];
        fVar8 = fVar8 * fVar8 + fVar7 * fVar7;
        func_004C9B74(param_1);
        puVar6 = func_004CADD8(param_1,*(uint *)(param_1 + 0x928));
        fVar7 = DAT_004cb56c;
        if (puVar6 != (undefined4 *)0x0) {
          fVar7 = *(float *)(param_1 + 0x3d0) - ALBW_AS_F32(puVar6[0xf4]);
          fVar9 = *(float *)(param_1 + 0x3d8) - ALBW_AS_F32(puVar6[0xf6]);
          fVar7 = fVar7 * fVar7 + fVar9 * fVar9;
        }
        if (fVar7 < fVar8) {
          uVar5 = 7;
        }
        else {
          uVar5 = 0xb;
        }
        return func_0066A284((undefined4 *)(param_1 + 0x8bc),uVar5);
      }
      puVar1 = (undefined2 *)func_0054DDF4(param_1,1);
      *(undefined2 **)(param_1 + 0x9a4) = puVar1;
      func_004F88A0((int *)param_1,puVar1);
      puVar6 = (undefined4 *)(param_1 + 0x8bc);
      if (*(char *)(param_1 + 0x978) == '\0') {
        iVar2 = func_004C9B74(param_1);
        if (iVar2 == 0) {
          return func_0066A284(puVar6,3);
        }
      }
      else {
        switch(*(undefined1 *)(param_1 + 0x8e5)) {
        case 0:
        case 1:
        case 3:
        case 4:
          if (*(char *)(param_1 + 0x98e) == '\0') {
            return func_004CB500(param_1);
          }
          func_004C9B74(param_1);
          puVar3 = func_004CADD8(param_1,*(uint *)(param_1 + 0x928));
          break;
        case 2:
          func_004C9B74(param_1);
          puVar3 = func_004CADD8(param_1,*(uint *)(param_1 + 0x928));
          break;
        default:
          return 0;
        }
        if (puVar3 == (undefined4 *)0x0) {
          *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffb;
          func_004FD038(param_1 + 0x5a8,0);
          *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7f;
          func_004FAD90(param_1);
          *(undefined1 *)(param_1 + 0x924) = 1;
          return func_0066A284(puVar6,10);
        }
      }
      return func_0066A284(puVar6,7);
    }
    func_0066A284(puVar6,2);
  }
  return 0;
}

