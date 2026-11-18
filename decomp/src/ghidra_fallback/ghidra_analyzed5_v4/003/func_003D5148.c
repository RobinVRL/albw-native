#include "ghidra_types.h"

extern int func_00115074(float *param_1,float *param_2,float *param_3);
extern float DAT_003d52a0;

// USA 003D5148 <- EU 003D5128 (Ghidra, non-matching)
// GLOBAL DAT_003d52a0 float

void func_003D5148(int param_1,short *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint in_fpscr;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  if (*(char *)(param_1 + 0x48) != '\0') {
    *param_2 = *param_2 - *(short *)(param_1 + 0xe);
    param_2[1] = param_2[1] - *(short *)(param_1 + 0x10);
    param_2[2] = param_2[2] - *(short *)(param_1 + 0x12);
  }
  if (*(char *)(param_1 + 0x49) != '\0') {
    if (*(int *)(param_1 + 0x18) == 0x3f800000) {
      uVar1 = in_fpscr & 0xfffffff;
      in_fpscr = uVar1 | (uint)(*(float *)(param_1 + 0x1c) == DAT_003d52a0) << 0x1e;
      bVar3 = false;
      if (SUB41(in_fpscr >> 0x1e,0)) {
        in_fpscr = uVar1 | (uint)(*(float *)(param_1 + 0x20) == DAT_003d52a0) << 0x1e;
        bVar3 = SUB41(in_fpscr >> 0x1e,0);
      }
      if (bVar3) {
        uVar1 = in_fpscr & 0xfffffff;
        in_fpscr = uVar1 | (uint)(*(float *)(param_1 + 0x24) == DAT_003d52a0) << 0x1e;
        bVar3 = false;
        if (SUB41(in_fpscr >> 0x1e,0)) {
          in_fpscr = uVar1 | (uint)(*(float *)(param_1 + 0x28) == DAT_003d52a0) << 0x1e;
          bVar3 = SUB41(in_fpscr >> 0x1e,0);
        }
        if (bVar3) {
          bVar3 = false;
          if (*(int *)(param_1 + 0x2c) == 0x3f800000) {
            in_fpscr = in_fpscr & 0xfffffff |
                       (uint)(*(float *)(param_1 + 0x30) == DAT_003d52a0) << 0x1e;
            bVar3 = SUB41(in_fpscr >> 0x1e,0);
          }
          if (bVar3) {
            uVar1 = in_fpscr & 0xfffffff;
            in_fpscr = uVar1 | (uint)(*(float *)(param_1 + 0x34) == DAT_003d52a0) << 0x1e;
            bVar3 = false;
            if (SUB41(in_fpscr >> 0x1e,0)) {
              in_fpscr = uVar1 | (uint)(*(float *)(param_1 + 0x38) == DAT_003d52a0) << 0x1e;
              bVar3 = SUB41(in_fpscr >> 0x1e,0);
            }
            bVar2 = false;
            if (bVar3) {
              in_fpscr = in_fpscr & 0xfffffff |
                         (uint)(*(float *)(param_1 + 0x3c) == DAT_003d52a0) << 0x1e;
              bVar2 = SUB41(in_fpscr >> 0x1e,0);
            }
            if (bVar2) {
              bVar3 = false;
              if (*(int *)(param_1 + 0x40) == 0x3f800000) {
                in_fpscr = in_fpscr & 0xfffffff |
                           (uint)(*(float *)(param_1 + 0x44) == DAT_003d52a0) << 0x1e;
                bVar3 = SUB41(in_fpscr >> 0x1e,0);
              }
              if (bVar3) {
                return;
              }
            }
          }
        }
      }
    }
    local_18 = (float)VectorSignedToFloat((int)*param_2,(byte)(in_fpscr >> 0x15) & 3);
    local_10 = (float)VectorSignedToFloat((int)param_2[2],(byte)(in_fpscr >> 0x15) & 3);
    local_14 = (float)VectorSignedToFloat((int)param_2[1],(byte)(in_fpscr >> 0x15) & 3);
    func_00115074(&local_18,(float *)(param_1 + 0x18),&local_18);
    *param_2 = (short)(int)local_18;
    param_2[1] = (short)(int)local_14;
    param_2[2] = (short)(int)local_10;
  }
  return;
}

