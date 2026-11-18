#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern void func_0068A458(float *param_1,float *param_2);
extern float DAT_0042afa0;

// USA 0042ADDC <- EU 0042ADBC (Ghidra, non-matching)
// GLOBAL DAT_0042afa0 float

undefined4 func_0042ADDC(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(float *)(albw_frame + 0x0))
  #define local_6c (*(float *)(albw_frame + 0x4))
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define fStack_64 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_44 (*(float *)(albw_frame + 0x2c))
  #define local_40 (*(float *)(albw_frame + 0x30))
  #define local_3c (*(float *)(albw_frame + 0x34))
  #define local_38 (*(float *)(albw_frame + 0x38))
  #define local_34 (*(float *)(albw_frame + 0x3c))
  #define local_30 (*(float *)(albw_frame + 0x40))
  #define local_2c (*(float *)(albw_frame + 0x44))
  #define fStack_28 (*(float *)(albw_frame + 0x48))
  #define fStack_24 (*(float *)(albw_frame + 0x4c))
  func_00115C70(&local_70,(float *)(param_1 + 100),(float *)(param_1 + 0x58));
  local_44 = local_70;
  local_40 = local_6c;
  local_3c = local_68;
  func_0068A458(&local_60,&local_44);
  local_54 = *(float *)(param_1 + 0x58);
  uStack_50 = *(undefined4 *)(param_1 + 0x5c);
  local_4c = *(undefined4 *)(param_1 + 0x60);
  fVar3 = DAT_0042afa0;
  if (NAN(local_60 * *(float *)(param_2 + 0x58) + local_5c * *(float *)(param_2 + 0x5c) +
          local_58 * *(float *)(param_2 + 0x60)) || NAN(DAT_0042afa0)) {
    func_00115D70(&local_2c,&local_60,fVar2);
    local_6c = local_2c;
    local_68 = fStack_28;
    fStack_64 = fStack_24;
    func_00115C54(&local_54,&local_54,&local_6c);
  }
  else {
    func_00115D70(&local_2c,&local_60,fVar2);
    local_70 = local_2c;
    local_6c = fStack_28;
    local_68 = fStack_24;
    func_00115C70(&local_54,&local_54,&local_70);
  }
  func_00115D70(&local_70,(float *)(param_2 + 0x58),*(float *)(param_2 + 100));
  local_38 = local_70;
  local_34 = local_6c;
  local_30 = local_68;
  func_00115C70(&local_70,&local_54,&local_38);
  local_44 = local_70;
  local_40 = local_6c;
  local_3c = local_68;
  local_38 = local_70;
  local_34 = local_6c;
  local_30 = local_68;
  fVar2 = *(float *)(param_1 + 0x70) -
          (*(float *)(param_2 + 0x58) * local_70 + *(float *)(param_2 + 0x5c) * local_6c +
          *(float *)(param_2 + 0x60) * local_68);
  if (fVar2 <= fVar3) {
    uVar1 = 0;
  }
  else {
    if (param_3 != 0) {
      *(float *)(param_3 + 0x1c) = fVar2;
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 0x58);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0x5c);
      *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0x60);
      func_00115D70(&local_2c,(float *)(param_3 + 4),*(float *)(param_1 + 0x70));
      local_6c = local_2c;
      local_68 = fStack_28;
      fStack_64 = fStack_24;
      func_00115C70(&local_2c,&local_54,&local_6c);
      *(float *)(param_3 + 0x10) = local_2c;
      *(float *)(param_3 + 0x14) = fStack_28;
      *(float *)(param_3 + 0x18) = fStack_24;
    }
    uVar1 = 1;
  }
  return uVar1;
}

