#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_003838A8(int param_1,int param_2);
extern int func_003840A0(int param_1,int param_2);
extern float DAT_003bf884;
extern undefined4 DAT_003bf888;
extern undefined4 DAT_003bf88c;

// USA 003BF784 <- EU 003BF760 (Ghidra, non-matching)
// GLOBAL DAT_003bf884 float
// GLOBAL DAT_003bf888 undefined4
// GLOBAL DAT_003bf88c undefined4

undefined4 func_003BF784(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((uint *)(albw_frame + 0x8))
  #define piStack_70 (*(int * *)(albw_frame + 0x10))
  #define local_6c (*(int *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define local_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x60))
  (**(code **)(*param_1 + 0x140))(param_1);
  bVar1 = func_003840A0(param_1[0x12] + 0x8c0,0x13);
  if (bVar1) {
    iVar3 = param_1[0x12];
    iVar2 = *(int *)(*(int *)(iVar3 + 0x8dc) + 0x14);
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      if (*(float *)(iVar2 + 0x10) < DAT_003bf884) {
        if (DAT_003bf884 < *(float *)(iVar2 + 8)) {
          return 1;
        }
      }
      else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) {
        return 1;
      }
      fVar4 = DAT_003bf884;
      iVar2 = func_003838A8(iVar3 + 0x8c0,0x14);
      bVar1 = func_003840A0(iVar3 + 0x8c0,iVar2);
      if (!bVar1) {
        piStack_70 = &local_6c;
        local_78[1] = 3;
        local_24 = 10;
        local_20 = 0;
        local_78[0] = 1;
        local_64 = DAT_003bf888;
        local_60 = DAT_003bf88c;
        local_58 = param_4 | 0xff;
        local_5c = DAT_003bf888;
        local_6c = iVar2;
        local_68 = fVar4;
        func_0016898C(*(int *)(iVar3 + 0x8dc),local_78);
      }
    }
  }
  return 1;
}

