#include "ghidra_types.h"

extern int func_00114F58(float *param_1,float *param_2);
extern int func_00115074(float *param_1,float *param_2,float *param_3);
extern int func_00568AA4(float *param_1,int param_2);
extern undefined4 DAT_0040785c;

// USA 004077E4 <- EU 004077C4 (Ghidra, non-matching)
// GLOBAL DAT_0040785c undefined4

undefined4 func_004077E4(int param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define fStack_54 (*(float *)(albw_frame + 0x1c))
  #define local_4c (*(float *)(albw_frame + 0x24))
  #define fStack_48 (*(float *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define afStack_40 ((float *)(albw_frame + 0x30))
  func_00114F58(afStack_40,(float *)(param_1 + 0x48));
  local_4c = *param_2;
  fStack_48 = param_2[1];
  local_44 = DAT_0040785c;
  func_00115074(&local_58,afStack_40,&local_4c);
  func_00568AA4(&local_68,param_1);
  bVar1 = local_68 == local_58;
  bVar2 = local_58 <= local_68;
  if (!bVar2 || bVar1) {
    bVar1 = local_58 == local_60;
    bVar2 = local_60 <= local_58;
  }
  if (!bVar2 || bVar1) {
    bVar1 = local_5c == fStack_54;
    bVar2 = fStack_54 <= local_5c;
    if (!bVar2 || bVar1) {
      bVar1 = fStack_54 == local_64;
      bVar2 = local_64 <= fStack_54;
    }
    if (!bVar2 || bVar1) {
      return 1;
    }
  }
  return 0;
}

