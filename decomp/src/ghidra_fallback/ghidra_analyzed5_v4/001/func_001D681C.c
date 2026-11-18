#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_00539200(int param_1);
extern undefined4 DAT_001d68a0;
extern int DAT_001d68a4;
extern float DAT_001d68a8;
extern float DAT_001d68ac;

// USA 001D681C <- EU 001D681C (Ghidra, non-matching)
// GLOBAL DAT_001d68a0 undefined4
// GLOBAL DAT_001d68a4 int
// GLOBAL DAT_001d68a8 float
// GLOBAL DAT_001d68ac float

void func_001D681C(int *param_1)

{
  bool bVar1;
  uint in_fpscr;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define auStack_70 ((undefined4 *)(albw_frame + 0x0))
  #define local_10 (*(int *)(albw_frame + 0x60))
  #define local_c (*(undefined4 *)(albw_frame + 0x64))
  if (*(byte *)((int)param_1 + 0x516) < 4) {
    func_0010A464(auStack_70);
    local_c = DAT_001d68a0;
    local_10 = DAT_001d68a4;
    func_00150A84(param_1,&local_10,(int)auStack_70);
    bVar1 = func_00539200((int)auStack_70);
    if (bVar1) {
      fparam_1 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)((int)param_1 + 0x516),
                                   (byte)(in_fpscr >> 0x15) & 3);
      func_0025B860((int)auStack_70,0,DAT_001d68ac - fparam_1 * DAT_001d68a8,fparam_1);
    }
    func_0025B874(auStack_70);
  }
  return;
}

