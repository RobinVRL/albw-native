#include "ghidra_types.h"

extern int func_00504BC4(undefined4 *param_1,int param_2);
extern int func_00504D48(int param_1,int param_2);
extern int *DAT_0027a5d8;
extern undefined4 DAT_0027a5dc;
extern undefined DAT_0027a5e0;
extern char s_Actor_ColiseumAudience_bch_0027a5f8[];
extern char s_MapActor_vr_Omote_bch_0027a614[];
extern char s_MapActor_vr_Ura_bch_0027a5e4[];
extern char s_cf_0027a5e4[];
extern char s_cf_0027a5f8[];
extern char s_cf_0027a614[];

// USA 0027A4DC <- EU 0027A504 (Ghidra, non-matching)
// GLOBAL DAT_0027a5d8 int *
// GLOBAL DAT_0027a5dc undefined4
// GLOBAL DAT_0027a5e0 undefined
// GLOBAL s_cf_0027a5f8 string
// GLOBAL s_cf_0027a614 string
// GLOBAL s_cf_0027a5e4 string

undefined4 func_0027A4DC(int param_1)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define auStack_60 ((undefined4 *)(albw_frame + 0x0))
  #define local_20 (*(char * *)(albw_frame + 0x40))
  #define local_10 (*(undefined4 *)(albw_frame + 0x50))
  #define local_c (*(undefined * *)(albw_frame + 0x54))
  piVar1 = DAT_0027a5d8;
  if (param_1 != 0x18) {
    if (param_1 < 0x19) {
      if (param_1 == 0) {
        local_c = &DAT_0027a5e0;
        local_10 = DAT_0027a5dc;
        func_00504BC4(auStack_60,(int)&local_10);
        local_20 = s_MapActor_vr_Omote_bch_0027a614;
        return func_00504D48(*piVar1,(int)auStack_60);
      }
      if (param_1 == 1) {
        local_c = &DAT_0027a5e0;
        local_10 = DAT_0027a5dc;
        func_00504BC4(auStack_60,(int)&local_10);
        local_20 = s_MapActor_vr_Ura_bch_0027a5e4;
        func_00504D48(*piVar1,(int)auStack_60);
      }
    }
    else if (param_1 == 0x19 || param_1 == 0x1a) goto LAB_0027a570;
    return 0;
  }
LAB_0027a570:
  local_c = &DAT_0027a5e0;
  local_10 = DAT_0027a5dc;
  func_00504BC4(auStack_60,(int)&local_10);
  local_20 = s_Actor_ColiseumAudience_bch_0027a5f8;
  return func_00504D48(*piVar1,(int)auStack_60);
}

