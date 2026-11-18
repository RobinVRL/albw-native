#include "ghidra_types.h"

extern int func_00300028(uint *param_1);
extern int func_00300054(uint *param_1);
extern int func_003004F4(undefined1 *param_1,uint param_2,undefined4 param_3);
extern int DAT_001003f8;

// GLOBAL DAT_001003f8 int
// USA 00100340 <- EU 00100340 (Ghidra, function missing from the decomp table)

undefined4 func_00100340(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 ((undefined1 *)(albw_frame + 0x10))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(uint *)(albw_frame + 0x1c))
  #define puStack_20 (*(uint * *)(albw_frame + 0x20))
  #define local_1c (*(int *)(albw_frame + 0x24))
  #define iStack_18 (*(int *)(albw_frame + 0x28))
  iVar4 = 0;
  local_38 = *(undefined4 *)(DAT_001003f8 + 0x10034e);
  local_34 = *(undefined4 *)(DAT_001003f8 + 0x100352);
  iVar3 = 0;
  puStack_20 = param_1;
  local_1c = param_2;
  iStack_18 = param_3;
  do {
    if ((((int)(*param_1 << 0x1a) < 0) && ((int)param_1[7] <= iVar4)) ||
       ((param_3 <= iVar3 && (*(short *)(local_1c + iVar3 * 2) == 0)))) goto LAB_00100396;
    iVar1 = func_003004F4(local_30,(uint)*(ushort *)(local_1c + iVar3 * 2),&local_38);
    if (iVar1 != -1) {
      if (((int)(*param_1 << 0x1a) < 0) && (param_1[7] < (uint)(iVar4 + iVar1))) {
LAB_00100396:
        param_1[6] = param_1[6] - iVar4;
        func_00300028(param_1);
        local_38 = *(undefined4 *)(DAT_001003f8 + 0x10034e);
        local_34 = *(undefined4 *)(DAT_001003f8 + 0x100352);
        for (local_28 = 0; local_28 < iVar3; local_28 = local_28 + 1) {
          local_24 = func_003004F4(local_30,(uint)*(ushort *)(local_1c + local_28 * 2),&local_38);
          if (local_24 != 0xffffffff) {
            for (uVar2 = 0; uVar2 < local_24; uVar2 = uVar2 + 1) {
              (*(code *)param_1[1])(local_30[uVar2],param_1[2]);
            }
          }
        }
        param_1[8] = param_1[8] + iVar4;
        return func_00300054(param_1);
      }
      iVar4 = iVar4 + iVar1;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

