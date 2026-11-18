#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern undefined4 DAT_003ac4b8;
extern float DAT_003ac4bc;

// USA 003AC424 <- EU 003AC400 (Ghidra, non-matching)
// GLOBAL DAT_003ac4b8 undefined4
// GLOBAL DAT_003ac4bc float

undefined4 func_003AC424(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define local_74 (*(undefined4 *)(albw_frame + 0xc))
  #define local_70 (*(undefined4 *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define fStack_64 (*(float *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(undefined4 *)(albw_frame + 0x28))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define fStack_50 (*(float *)(albw_frame + 0x30))
  #define local_4c (*(undefined4 *)(albw_frame + 0x34))
  #define afStack_48 ((float *)(albw_frame + 0x38))
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x40c);
  if (iVar1 != 0) {
    func_001119F4(&local_78,(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x24) + 0x14) + param_3 * 0x30)
                 );
    local_6c = *(undefined4 *)(param_1 + 8);
    local_78 = DAT_003ac4bc;
    local_74 = DAT_003ac4b8;
    local_70 = DAT_003ac4b8;
    local_68 = DAT_003ac4b8;
    fStack_64 = DAT_003ac4bc;
    local_60 = DAT_003ac4b8;
    local_58 = DAT_003ac4b8;
    local_54 = DAT_003ac4b8;
    fStack_50 = DAT_003ac4bc;
    local_5c = DAT_003ac4b8;
    local_4c = DAT_003ac4b8;
    func_001119F4(afStack_48,
                  (undefined4 *)(*(int *)(*(int *)(iVar1 + 0x24) + 0x14) + param_3 * 0x30));
    func_001157FC(afStack_48,afStack_48,&local_78);
    func_001151EC((undefined4 *)(*(int *)(*(int *)(iVar1 + 0x24) + 0x14) + param_3 * 0x30),
                  afStack_48);
  }
  return 0;
}

