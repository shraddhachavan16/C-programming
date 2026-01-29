import React, { useState } from "react";
import "./style.css";

function OtpLogin() 
{
  const [otp, setOtp] = useState("");

  function verifyOtp()
  {
    if (otp.length === 5) 
    {
      alert("OTP Verified Successfully");
    } else 
    {
      alert("Please enter 5 digit OTP");
    }
  }

  return (
    <div className="box">
      <h2>Verify Mobile Number</h2>

      <p>OTP sent to 9999999999</p>

      <input
        type="text"
        placeholder="Enter OTP"
        maxLength="5"
        value={otp}
        onChange={(e) => setOtp(e.target.value)}
      />

      <button onClick={verifyOtp}>Verify OTP</button>

      <p className="resend">Resend OTP</p>
    </div>
  );
}

export default OtpLogin;
