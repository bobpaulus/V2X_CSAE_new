/*
 * Generated by ASN.1 Java Compiler (http://www.asnlab.org/)
 * From ASN.1 module "BasicSafetyMessage"
 */
package BasicSafetyMessage;

import java.io.*;
import javax.validation.constraints.*;
import org.asnlab.asndt.runtime.conv.*;
import org.asnlab.asndt.runtime.conv.annotation.*;
import org.asnlab.asndt.runtime.type.AsnType;
import org.asnlab.asndt.runtime.value.*;

public class BasicSafetyMessage {


	public boolean equals(Object obj) {
		if(!(obj instanceof BasicSafetyMessage)){
			return false;
		}
		return TYPE.equals(this, obj, CONV);
	}

	public void ber_encode(OutputStream out) throws IOException {
		TYPE.encode(this, EncodingRules.BASIC_ENCODING_RULES, CONV, out);
	}

	public static BasicSafetyMessage ber_decode(InputStream in) throws IOException {
		return (BasicSafetyMessage)TYPE.decode(in, EncodingRules.BASIC_ENCODING_RULES, CONV);
	}


	public final static AsnType TYPE = BasicSafetyMessage.type(65537);

	public final static CompositeConverter CONV;

	static {
		CONV = new AnnotationCompositeConverter(BasicSafetyMessage.class);
		CONV.setComponentConverters(new AsnConverter[] {  });
	}


}