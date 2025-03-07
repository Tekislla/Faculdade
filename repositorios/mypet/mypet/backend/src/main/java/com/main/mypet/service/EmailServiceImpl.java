package com.main.mypet.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.mail.SimpleMailMessage;
import org.springframework.mail.javamail.JavaMailSender;
import org.springframework.stereotype.Component;

@Component
public class EmailServiceImpl {
	@Autowired
	private JavaMailSender emailSender;
	
	public void sendDefaultMessage(String to, String subject, String text) {
	    SimpleMailMessage message = new SimpleMailMessage(); 
	    message.setFrom("no-reply@mypet.com");
	    message.setTo(to); 
	    message.setSubject(subject); 
	    message.setText(text);
	    emailSender.send(message);
	}

}
