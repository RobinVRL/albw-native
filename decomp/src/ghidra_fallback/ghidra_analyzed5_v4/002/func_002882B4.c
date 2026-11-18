#include "ghidra_types.h"

extern int func_003615E8(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_00547514(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int DAT_002883a0;
extern int *DAT_002883a4;
extern int DAT_002883a8;
extern int *DAT_002883ac;
extern int *DAT_002883b0;
extern char s_SE_PL_MAGIC_BOTTLE_GET_00288388[];

// USA 002882B4 <- EU 002882DC (Ghidra, non-matching)
// GLOBAL DAT_002883a0 int
// GLOBAL DAT_002883a4 int *
// GLOBAL DAT_002883a8 int
// GLOBAL DAT_002883ac int *
// GLOBAL DAT_002883b0 int *
// GLOBAL s_SE_PL_MAGIC_BOTTLE_GET_00288388 string

undefined4 func_002882B4(int param_1)

{
  bool bVar1;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if ((-1 < *(short *)(param_1 + 0x5a)) || (*(char *)(param_1 + 0x4e0) != '\x01')) {
    local_14 = s_SE_PL_MAGIC_BOTTLE_GET_00288388;
    local_18 = DAT_002883a0;
    func_004EA104(*DAT_002883a4,&local_18,0);
    if (*(char *)(param_1 + 0x4e0) != '\a') {
      bVar1 = func_00584B94(*DAT_002883ac,DAT_002883a8);
      if (bVar1) {
        func_003615E8(*DAT_002883b0,in_s0,in_s1,in_s2,in_s3);
        func_00547514(param_1 + 4);
        *(undefined1 *)(param_1 + 0x2d7) = 1;
        return 1;
      }
      *(undefined1 *)(param_1 + 0x531) = 1;
    }
  }
  return 0;
}

