/* s0..s2 of a Vec3 returned in VFP registers (ARM hard-float homogeneous aggregate, BOOT_LOG 160l).
 * Natively such functions return x and publish the whole vector here; their converted callers read
 * y / z from it right after the call (single game thread for these paths). */
float albw_s012[3];
