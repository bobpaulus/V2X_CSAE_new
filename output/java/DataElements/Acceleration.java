/*
 * Generated by ASN.1 Java Compiler (http://www.asnlab.org/)
 * From ASN.1 module "DataElements"
 */
package DataElements;

import java.io.*;
import java.math.*;
import javax.validation.constraints.*;
import org.asnlab.asndt.runtime.conv.*;
import org.asnlab.asndt.runtime.conv.annotation.*;
import org.asnlab.asndt.runtime.type.AsnType;
import org.asnlab.asndt.runtime.value.*;

public class Acceleration {


	public static void ber_encode(Integer object, OutputStream out) throws IOException {
		TYPE.encode(object, EncodingRules.BASIC_ENCODING_RULES, CONV, out);
	}

	public static Integer ber_decode(InputStream in) throws IOException {
		return (Integer)TYPE.decode(in, EncodingRules.BASIC_ENCODING_RULES, CONV);
	}


	public final static AsnType TYPE = DataElements.type(65537);

	public final static AsnConverter CONV = IntegerConverter.INSTANCE;



}