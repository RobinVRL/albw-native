#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern float func_00115DC8(float *param_1);
extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_002D5350(int param_1,int param_2,int param_3,float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0054C998(int param_1,int param_2);
extern float DAT_002d57c4;
extern float DAT_002d57c8;
extern float DAT_002d57cc;
extern uint DAT_002d57d0;

// USA 002D56A8 <- EU 002D5684 (Ghidra, non-matching)
// GLOBAL DAT_002d57c4 float
// GLOBAL DAT_002d57c8 float
// GLOBAL DAT_002d57cc float
// GLOBAL DAT_002d57d0 uint

undefined4 func_002D56A8(int param_1,float fparam_0)

{
  _Alignas(8) unsigned char albw_frame[0x30]; /* entry_sp - 0x30 .. entry_sp + 0x0 */
#define stack0xffffffd0 (*(undefined4 *)(albw_frame + 0x0))
  uint uVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  #define in_stack_ffffffd0 (*(float *)(albw_frame + 0x0)) /* V4: frame slot (callee-filled) */
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define local_14 (*(float *)(albw_frame + 0x1c))
  fVar4 = *(float *)(*(int *)(param_1 + 0x48) + 0x24);
  if (DAT_002d57c4 < fVar4) {
    fVar4 = fparam_0 * DAT_002d57c8 * fVar4;
    fVar5 = DAT_002d57c4;
    uVar1 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
    func_00115154((float *)&stack0xffffffd0,&local_2c,uVar1);
    **(float **)(param_1 + 0x38) = fVar4 * in_stack_ffffffd0;
    *(float *)(*(int *)(param_1 + 0x38) + 8) = fVar4 * local_2c;
    func_004D80A4((float *)&stack0xffffffd0,**(uint **)(param_1 + 0x3c),DAT_002d57cc);
    pfVar2 = *(float **)(param_1 + 0x38);
    local_1c = *pfVar2;
    local_18 = pfVar2[1];
    local_14 = pfVar2[2];
    local_2c = fVar5;
    func_00115DC8(&local_1c);
    fVar5 = in_stack_ffffffd0 * local_1c + local_2c * local_18 + local_28 * local_14;
    if (((int)DAT_002d57d0 < (int)ALBW_AS_U32(fVar5)) || ((DAT_002d57d0 | DAT_002d57d0 << 0x1a) < (uint)ALBW_AS_U32(fVar5))) {
      iVar3 = 0xd;
    }
    else {
      iVar3 = 0xe;
    }
    return func_002D5350(param_1,1,iVar3,fVar4);
  }
  return func_0028D580((uint *)(*(int *)(param_1 + 0x4c) + 0x5c),
                (int)*(short *)(*(int *)(param_1 + 0x4c) + 0x52),1,1,6);
}

