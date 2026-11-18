#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int DAT_0042e8a4;

// USA 0042E7F4 <- EU 0042E7D4 (Ghidra, non-matching)
// GLOBAL DAT_0042e8a4 int

bool func_0042E7F4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define iStack_24 (*(int *)(albw_frame + 0xc))
  #define iStack_20 (*(int *)(albw_frame + 0x10))
  iVar1 = DAT_0042e8a4;
  *(undefined1 *)(DAT_0042e8a4 + 0x6e) = 1;
  param_1[0x122] = (int)(param_1 + 0x22);
  if (param_3 == 1) {
    *(undefined1 *)(param_1 + 0x128) = 0;
    func_00115C54(&local_28,*(float **)(param_2 + 0x1c),(float *)(param_2 + 0x30));
    param_1[0x124] = (int)ALBW_AS_U32(local_28);
    param_1[0x125] = iStack_24;
    param_1[0x126] = iStack_20;
    param_1[0x127] = *(int *)(param_2 + 0x2c);
    (**(code **)(*param_1 + 0x14))(param_1,0,param_2);
  }
  else {
    iVar2 = 0;
    *(undefined1 *)(param_1 + 0x128) = 1;
    if (0 < param_3) {
      do {
        (**(code **)(*param_1 + 0x14))(param_1,0,param_2 + iVar2 * 0x3c);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_3);
    }
  }
  *(undefined1 *)(iVar1 + 0x6e) = 0;
  *(undefined2 *)param_1[0x122] = 0;
  return (short)param_1[0x22] != 0;
}

