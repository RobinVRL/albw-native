#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00491938(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern float DAT_002cb820;

// USA 002CB758 <- EU 002CB734 (Ghidra, non-matching)
// GLOBAL DAT_002cb820 float

undefined4 func_002CB758(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define afStack_78 ((float *)(albw_frame + 0x8))
  #define afStack_48 ((float *)(albw_frame + 0x38))
  #define local_18 (*(float *)(albw_frame + 0x68))
  #define local_14 (*(float *)(albw_frame + 0x6c))
  #define local_10 (*(float *)(albw_frame + 0x70))
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 == param_3) ||
     ((param_2 = *(uint *)(param_1 + 0xc), param_2 == param_3 && (param_2 != 0xffff)))) {
    if (uVar1 == param_3) {
      param_2 = *(uint *)(param_1 + 0x10);
      uVar2 = *(uint *)(param_1 + 0x14);
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    if (uVar1 != param_3) {
      param_2 = 0;
    }
    if ((*(uint *)(*(int *)(param_1 + 4) + 0x8ac) & 0x80) == 0) {
      local_18 = DAT_002cb820;
      local_14 = DAT_002cb820;
      local_10 = DAT_002cb820;
      func_004D7EB0(afStack_48,param_2,uVar2,&local_18);
    }
    else {
      func_00491938(afStack_48,uVar2,0,param_2);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x7a0);
    func_001119F4(afStack_78,
                  (undefined4 *)(*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + param_3 * 0x30));
    func_001157FC(afStack_78,afStack_78,afStack_48);
    func_001151EC((undefined4 *)(*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + param_3 * 0x30),
                  afStack_78);
  }
  return 0;
}

