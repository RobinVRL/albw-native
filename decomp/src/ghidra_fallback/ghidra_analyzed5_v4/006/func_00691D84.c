#include "ghidra_types.h"

extern int func_00691884(int *param_1,int *param_2);
extern undefined DAT_00691e1c;
extern int DAT_00691e24;

// USA 00691D84 <- EU 00691D5C (Ghidra, non-matching)
// GLOBAL DAT_00691e1c undefined
// GLOBAL DAT_00691e24 int

uint func_00691D84(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined * *)(albw_frame + 0xc))
  iVar2 = DAT_00691e24;
  local_1c = &DAT_00691e1c;
  local_20 = DAT_00691e24;
  iVar1 = func_00691884(param_2,&local_20);
  if (iVar1 == 0) {
    uVar4 = 0;
    if (0 < param_1[0x70]) {
      do {
        piVar3 = param_1 + uVar4 * 7;
        do {
          iVar2 = func_00691884(param_2,piVar3);
          if (iVar2 != 0) {
            return uVar4;
          }
          uVar4 = uVar4 + 1;
          if (param_1[0x70] <= (int)uVar4) {
            return 0xffffffff;
          }
          piVar3 = param_1;
        } while (0xf < uVar4);
      } while( true );
    }
  }
  else {
    local_14 = &DAT_00691e1c;
    local_18 = iVar2;
    iVar2 = func_00691884(param_1 + 0x69,&local_18);
    if (iVar2 != 0) {
      return 0xf;
    }
  }
  return 0xffffffff;
}

