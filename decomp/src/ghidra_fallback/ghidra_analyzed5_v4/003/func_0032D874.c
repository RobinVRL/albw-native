#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FB58(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_00520FC0(void);
extern int func_0058A7D4(void);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);
extern int DAT_0032da70;
extern float DAT_0032da74;
extern int DAT_0032da78;
extern float DAT_0032da7c;
extern float DAT_0032da80;
extern int DAT_0032da84;
extern float DAT_0032da88;
extern undefined4 DAT_0032da8c;
extern float DAT_0032da90;
extern float DAT_0032da94;
extern char s_SE_BlackShueyes_MOVE_0032da58[];

// USA 0032D874 <- EU 0032D850 (Ghidra, non-matching)
// GLOBAL DAT_0032da70 int
// GLOBAL DAT_0032da74 float
// GLOBAL DAT_0032da78 int
// GLOBAL DAT_0032da7c float
// GLOBAL DAT_0032da80 float
// GLOBAL DAT_0032da84 int
// GLOBAL DAT_0032da88 float
// GLOBAL DAT_0032da8c undefined4
// GLOBAL DAT_0032da90 float
// GLOBAL DAT_0032da94 float
// GLOBAL s_SE_BlackShueyes_MOVE_0032da58 string

undefined4 func_0032D874(int param_1)

{
  float *pfVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  local_2c = s_SE_BlackShueyes_MOVE_0032da58;
  local_30 = DAT_0032da70;
  func_001507D8(param_1,&local_30,0);
  pfVar1 = (float *)func_00520FC0();
  func_0014FB58(param_1,pfVar1,*(int *)(DAT_0032da78 + 4),DAT_0032da74);
  pfVar1 = (float *)(param_1 + 0xc24);
  local_28 = *(float *)(param_1 + 0x3d0);
  fStack_20 = *(float *)(param_1 + 0x3d8);
  fVar7 = *(float *)(param_1 + 0xc2c) - fStack_20;
  fVar6 = DAT_0032da7c;
  if (*(char *)(param_1 + 0xc96) == '\0') {
    fVar6 = DAT_0032da80;
  }
  if ((int)ALBW_AS_U32(((*pfVar1 - local_28) * (*pfVar1 - local_28) + fVar7 * fVar7)) < DAT_0032da84) {
    local_24 = *(undefined4 *)(param_1 + 0x3d4);
    fVar7 = *(float *)(param_1 + 0xc48);
    if (*(float *)(param_1 + 0xc48) < fVar6) {
      fVar7 = fVar6;
    }
    iVar2 = func_004D838C(&local_28,pfVar1,DAT_0032da88,fVar6,fVar7);
    func_00115C70((float *)(param_1 + 0x3dc),&local_28,(float *)(param_1 + 0x3d0));
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0xc48) = DAT_0032da8c;
      puVar3 = (uint *)func_0058A7D4();
      uVar4 = func_00111A64(puVar3);
      puVar5 = (undefined4 *)(param_1 + 0xba8);
      if ((1 < *(int *)(param_1 + 0xc6c)) || (0x3b < (uint)((ulonglong)uVar4 * 100 >> 0x20))) {
        *(undefined4 *)(param_1 + 0xc6c) = 0;
        puVar3 = (uint *)func_0058A7D4();
        uVar4 = func_00111A64(puVar3);
        if ((*(char *)(param_1 + 0xc97) == '\0') && (0x45 < (uint)((ulonglong)uVar4 * 100 >> 0x20)))
        {
          return func_00665670(puVar5,7);
        }
        *(undefined1 *)(param_1 + 0xc97) = 0;
        return func_00665670(puVar5,10);
      }
      *(int *)(param_1 + 0xc6c) = *(int *)(param_1 + 0xc6c) + 1;
      func_00665670(puVar5,5);
    }
    return 0;
  }
  fVar7 = DAT_0032da88;
  if (*(char *)(param_1 + 0xc96) == '\0') {
    fVar7 = DAT_0032da90;
  }
  if (*(float *)(param_1 + 0xc48) < fVar7) {
    fVar6 = *(float *)(param_1 + 0xc48) + fVar6;
    *(float *)(param_1 + 0xc48) = fVar6;
    if (fVar6 <= fVar7) {
      fVar7 = fVar6;
    }
    *(float *)(param_1 + 0xc48) = fVar7;
  }
  local_28 = *(float *)(param_1 + 0x3d0);
  local_24 = *(undefined4 *)(param_1 + 0x3d4);
  fStack_20 = *(float *)(param_1 + 0x3d8);
  func_004D838C(&local_28,pfVar1,DAT_0032da94,*(float *)(param_1 + 0xc48),
                *(float *)(param_1 + 0xc48));
  return func_00115C70((float *)(param_1 + 0x3dc),&local_28,(float *)(param_1 + 0x3d0));
}

