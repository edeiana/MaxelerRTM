#include "stdsimheader.h"
//#include "CpuStreamKernel.h"
//#include "HWTypes.h"
//#include "KernelManagerBlockSync.h"

using namespace maxcompilersim;

// Templated Types used in the kernel
template class HWRawBits<1>;
template class HWOffsetFix<7,0,UNSIGNED>;
template class HWOffsetFix<1,0,UNSIGNED>;
template class HWOffsetFix<48,0,UNSIGNED>;
template class HWOffsetFix<49,0,UNSIGNED>;
template class HWOffsetFix<4,0,UNSIGNED>;
template class HWOffsetFix<32,0,UNSIGNED>;
// add. templates from the default formatter 


// Templated Methods/Functions
template HWOffsetFix<1,0,UNSIGNED>and_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<1,0,UNSIGNED> &b );
template HWOffsetFix<4,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<4,0,UNSIGNED> >(const std::string &name);
template HWOffsetFix<1,0,UNSIGNED> cast_bits2fixed<1,0,UNSIGNED>(const HWRawBits<1> &a);
template HWOffsetFix<32,0,UNSIGNED>add_fixed<32,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<32,0,UNSIGNED> &a, const HWOffsetFix<32,0,UNSIGNED> &b );
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b );
template HWRawBits<1> cast_fixed2bits<>(const HWOffsetFix<1,0,UNSIGNED> &a);
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<48,0,UNSIGNED> &a, const HWOffsetFix<48,0,UNSIGNED> &b );
template HWOffsetFix<1,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<1,0,UNSIGNED> >(const std::string &name);
template HWOffsetFix<7,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<7,0,UNSIGNED> >(const std::string &name);
template HWOffsetFix<32,0,UNSIGNED> KernelManagerBlockSync::readInput< HWOffsetFix<32,0,UNSIGNED> >(const t_port_number port_number);
template HWOffsetFix<48,0,UNSIGNED> cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<49,0,UNSIGNED> &a);
template HWOffsetFix<32,0,UNSIGNED>add_fixed<32,0,UNSIGNED,TONEAR>(const HWOffsetFix<32,0,UNSIGNED> &a, const HWOffsetFix<32,0,UNSIGNED> &b );
template HWOffsetFix<48,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name);
template HWOffsetFix<49,0,UNSIGNED>add_fixed<49,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b );
template void KernelManagerBlockSync::writeOutput< HWOffsetFix<32,0,UNSIGNED> >(const t_port_number port_number, const HWOffsetFix<32,0,UNSIGNED> &value);
template HWOffsetFix<1,0,UNSIGNED>not_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a );
template void KernelManagerBlockSync::setMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name, const HWOffsetFix<48,0,UNSIGNED> & value);


// Additional Code

