#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern float DAT_0023d37c;
extern undefined DAT_0023d380;
extern int DAT_0023d39c;
extern char s__SE_BlockBound_BOYOYON_0023d383[];
extern undefined4 _DAT_0023d380;

// USA 0023D2BC <- EU 0023D2BC (Ghidra, non-matching)
// GLOBAL DAT_0023d37c float
// GLOBAL DAT_0023d380 undefined
// GLOBAL DAT_0023d39c int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0023D2BC(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar2 = param_1[0x104];
  if (iVar2 != 0) {
    if (param_2 != 0) goto LAB_0023d324;
    iVar1 = *(int *)(iVar2 + 0x14);
    if (*(char *)(iVar1 + 0x1c) == '\0') {
      if (*(float *)(iVar1 + 0x10) < DAT_0023d37c) {
        if (*(float *)(iVar1 + 8) <= DAT_0023d37c) goto LAB_0023d324;
      }
      else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) {
LAB_0023d324:
        iVar2 = *(int *)(iVar2 + 0x14);
        if (*(float *)(iVar2 + 8) != DAT_0023d37c) {
          *(float *)(iVar2 + 8) = DAT_0023d37c;
          *(undefined1 *)(iVar2 + 0x26) = 1;
        }
        local_10 = DAT_0023d39c;
        *(undefined4 *)(*(int *)(param_1[0x104] + 0x14) + 0x10) = _DAT_0023d380;
        local_c = s__SE_BlockBound_BOYOYON_0023d383 + 1;
        return func_00150A84(param_1,&local_10,0);
      }
    }
  }
  return 0;
}

