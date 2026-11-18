/* compilefix: USA 00413D54 (EU 00413D34), the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/004/func_00413D54.c) with a GUARD that
 * the ARM does not have (port deviation, BOOT_LOG 159e): the sound archive reader built by
 * 0041297C stays empty (+4 = 0) when the archive block is not a loaded archive; the original
 * relies on it always being loaded and 0056C5EC then reads address 0xC. In the port the block is
 * not loaded at Game Over -> Quit game -> title (sound 0x10000A0 from 001DFB30): crash. Until the
 * sound data loading is fixed, such a start is skipped (logged once). */
#include <stdio.h>
#include "ghidra_types.h"

extern int func_0041297C(int *param_1,int *param_2);
extern int func_004134E4(int *param_1,int *param_2,int param_3);
extern int func_00569AB8(int param_1,uint param_2,undefined4 *param_3);
extern int func_0056C424(int *param_1,uint param_2);
extern int func_0056C5EC(int param_1,uint *param_2,uint param_3,uint param_4);
extern int func_0056C9A4(int *param_1,uint param_2);

// USA 00413D54 <- EU 00413D34 (Ghidra, non-matching)

int func_00413D54(int *param_1,uint param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(uint *)(albw_frame + 0x0))
  #define local_4c (*(uint *)(albw_frame + 0x4))
  #define local_48 (*(undefined1 *)(albw_frame + 0x8))
  #define local_47 (*(undefined1 *)(albw_frame + 0x9))
  #define local_46 (*(undefined1 *)(albw_frame + 0xa))
  #define local_45 (*(undefined1 *)(albw_frame + 0xb))
  #define local_44 (*(undefined1 *)(albw_frame + 0xc))
  #define local_38 ((undefined4 *)(albw_frame + 0x18))
  #define local_30 (*(char *)(albw_frame + 0x20))
  #define aiStack_28 ((int *)(albw_frame + 0x28))
  #define aiStack_18 ((int *)(albw_frame + 0x38))
  func_0041297C(aiStack_18,param_1);
  if (aiStack_18[1] == 0) {   /* port guard: archive not loaded (see header) */
    static int warned;
    if (!warned) { warned = 1; fprintf(stderr, "snd: start of sound %#x skipped: archive block %p not loaded\n", param_2, (void *)param_1); }
    return 0;
  }
  local_48 = 0;
  local_47 = 0;
  local_46 = 0;
  local_45 = 0;
  local_44 = 0;
  func_0056C5EC((int)aiStack_18,&local_50,param_2,0);
  piVar1 = (int *)func_0056C424(param_4,local_50);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    local_38[0] = 0xffffffff;
    local_30 = '\0';
    func_00569AB8(param_3,local_50,local_38);
    func_004134E4(aiStack_28,piVar1,(int)local_30);
    iVar2 = func_0056C9A4(aiStack_28,local_4c);
  }
  return iVar2;
}

