//
//  TextComponent.cpp
//  RPGEvolve
//
//  Created by Adrien Philippe on 03/11/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#include "TextComponent.h"

using namespace game::components;

std::string
TextComponent::componentId()
{
    return "textComponent";
}

void
TextComponent::init()
{
    _text = "";
}

void
TextComponent::awake()
{
    
}

void
TextComponent::update()
{
    
}

void
TextComponent::lateUpdate()
{
    
}

void
TextComponent::stop()
{
}


std::string
TextComponent::getText() const
{
    return _text;
}

void
TextComponent::setText(const std::string & text)
{
    _text = text;
}